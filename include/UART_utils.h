#ifndef __UART_UTILS_H
#define __UART_UTILS_H

#include "STC32G.h"
#include "config.h"

#define Baudrate      115200L
#define TM            (65536 -(MAIN_Fosc/Baudrate/4))
#define PrintUart     1        //1:printf 使用 UART1; 2:printf 使用 UART2

void UartPutc(unsigned char dat);
void UartInit(void);
char putchar(char c);

#endif