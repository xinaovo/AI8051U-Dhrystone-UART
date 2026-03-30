#include "Timer_utils.h"

void TimerInit(void)
{
    TIM_InitTypeDef TIM_InitStructure;                                   // 结构定义
    TIM_InitStructure.TIM_Mode = TIM_16BitAutoReload;                    // 指定工作模式,   TIM_16BitAutoReload,TIM_16Bit,TIM_8BitAutoReload,TIM_16BitAutoReloadNoMask
    TIM_InitStructure.TIM_ClkSource = TIM_CLOCK_1T;                      // 指定时钟源,     TIM_CLOCK_1T,TIM_CLOCK_12T,TIM_CLOCK_Ext
    TIM_InitStructure.TIM_ClkOut = DISABLE;                              // 是否输出高速脉冲, ENABLE或DISABLE
    TIM_InitStructure.TIM_Value = (u16)(65536UL - (MAIN_Fosc / 1000UL)); // 初值
    TIM_InitStructure.TIM_Run = ENABLE;                                  // 是否初始化后启动定时器, ENABLE或DISABLE
    Timer_Inilize(Timer0, &TIM_InitStructure);                           // 初始化Timer0	  Timer0,Timer1,Timer2,Timer3,Timer4
    NVIC_Timer0_Init(ENABLE, Priority_0);                                // 中断使能, ENABLE/DISABLE; 优先级(低到高) Priority_0,Priority_1,Priority_2,Priority_3
}


u32 GetSysTickMs(){
	return SysTickMs;
}

void Timer0_ISR_Handler (void) interrupt TMR0_VECTOR		//进中断时已经清除标志
{

  //Task_Marks_Handler_Callback();	//任务标记回调函数
	SysTickMs++;

}