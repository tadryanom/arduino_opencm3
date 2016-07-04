/****************************************************************************
 * Copyright (c) 2016 by Vassilis Serasidis <info@serasidis.gr>
 *
 * Variant definition library for Arduino STM32 + HAL + CubeMX (HALMX).
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 ****************************************************************************/

#ifndef _VARIANT_BLUEPILL_F103_
#define _VARIANT_BLUEPILL_F103_

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

/** Frequency of the board main oscillator */
#define VARIANT_MAINOSC		8000000

/** Master clock frequency */
#define VARIANT_MCK			72000000
/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "Arduino.h"
#ifdef __cplusplus
#include "Uart.h"
#endif

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/usart.h>
#include <libopencm3/stm32/flash.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/cm3/nvic.h>
#include <libopencm3/cm3/systick.h>



#define GPIO_PINS      35


/* This mapping is for from Blue pill Schematic */
enum {
  PA0, PA1, PA2, PA3, PA4, PA5, PA6, PA7, PA8, PA9, PA10, PA11, PA12, PA13,	PA14, PA15,
  PB0, PB1, PB2, PB3, PB4, PB5,	PB6, PB7, PB8, PB9, PB10, PB11, PB12, PB13, PB14, PB15,
  PC13, PC14, PC15
};

typedef struct _PinDescription
{
  	uint32_t   Port;
  	uint16_t 	Pin;
} PinDescription ;

extern const PinDescription g_PinDescription[] ;

#define PIN_SERIAL1_RX       PA10
#define PIN_SERIAL1_TX       PA9

#define PIN_SERIAL2_RX       PA3
#define PIN_SERIAL2_TX       PA2

#define PIN_SERIAL3_RX       PB11
#define PIN_SERIAL3_TX       PB10

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern Uart Serial1;
extern Uart Serial2;
extern Uart Serial3;
#endif

#endif
