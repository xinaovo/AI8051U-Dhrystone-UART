/*---------------------------------------------------------------------*/
/* --- Web: www.STCAI.com ---------------------------------------------*/
/*---------------------------------------------------------------------*/

#include	"STC32G_Timer.h"
#include 	"Timer_utils.h"
//#include	"Task.h"

//========================================================================
// 函数: Timer0_ISR_Handler
// 描述: Timer0中断函数.
// 参数: none.
// 返回: none.
// 版本: V1.0, 2020-09-23
//========================================================================

//extern volatile u32 SysTickMs;

//void Timer0_ISR_Handler (void) interrupt TMR0_VECTOR		//进中断时已经清除标志
//{
//  //Task_Marks_Handler_Callback();	//任务标记回调函数
//	//SysTickMs++;
//	u32 current_time = GetSysTickMs();
//	SetSysTickMs(current_time++);
//}
