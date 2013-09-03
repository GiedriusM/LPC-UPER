/**
 * @file	LPC_GPIO.h
 * @author  Giedrius Medzevicius <giedrius@8devices.com>
 *
 * @section LICENSE
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013 UAB 8devices
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @section DESCRIPTION
 *
 */

#ifndef LPC_GPIO_H_
#define LPC_GPIO_H_

#include "main.h"

inline void GPIO_EnableInt0(void);

void FLEX_INT0_IRQHandler(void);

void lpc_config_gpioInit(void);

void lpc_config_setPrimary(SFPFunction *msg);

void lpc_config_setSecondary(SFPFunction *msg);

void lpc_pinMode(SFPFunction *msg);

void lpc_digitalWrite(SFPFunction *msg);

void lpc_digitalRead(SFPFunction *msg);

void lpc_attachInterrupt(SFPFunction *msg);

void lpc_detachInterrupt(SFPFunction *msg);


#endif /* LPC_GPIO_H_ */
