#ifndef __TIMER_UTILS_H
#define __TIMER_UTILS_H

#include "STC32G.h"
#include "config.h"
#include "STC32G_Timer.h"
#include "STC32G_NVIC.h"

#include "UART_utils.h"
#include "stdio.h"
#include "intrins.h"

static volatile u32 SysTickMs = 0;

void Timer0_ISR_Handler (void);
void TimerInit(void);
u32 GetSysTickMs();

#endif