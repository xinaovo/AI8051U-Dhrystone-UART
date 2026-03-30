#include "UART_utils.h"

/******************** 串口打印函数 ********************/
void UartPutc(unsigned char dat)
{
#if(PrintUart == 1)
	SBUF = dat; 
	while(TI==0);
	TI = 0;
#else
	S2BUF  = dat; 
	while(S2TI == 0);
	S2TI = 0;    //Clear Tx flag
#endif
}

char putchar(char c)
{
	UartPutc(c);
	return c;
}

void UartInit(void)
{
#if(PrintUart == 1)
	S1_S1 = 0x2;	// UART1 -> TX:P1.7, RX:P1.6
	SCON = (SCON & 0x3f) | 0x40; 
	T1x12 = 1;          //定时器时钟1T模式
	S1BRT = 0;          //串口1选择定时器1为波特率发生器
	TL1  = TM;
	TH1  = TM>>8;
	TR1 = 1;				//定时器1开始计时

//	SCON = (SCON & 0x3f) | 0x40; 
//	T2L  = TM;
//	T2H  = TM>>8;
//	AUXR |= 0x15;   //串口1选择定时器2为波特率发生器
#else
	S2_S = 1;       //UART2 switch to: 0: P1.0 P1.1,  1: P4.6 P4.7
  S2CFG |= 0x01;  //使用串口2时，W1位必需设置为1，否则可能会产生不可预期的错误
	S2CON = (S2CON & 0x3f) | 0x40; 
	T2L  = TM;
	T2H  = TM>>8;
	AUXR |= 0x14;	      //定时器2时钟1T模式,开始计时
#endif
}