/*
 * ttp229.h
 *
 *  Created on: Oct 9, 2025
 *      Author: jain2
 */

#ifndef INC_TTP229_H_
#define INC_TTP229_H_

//#include "stm32f1xx_hal.h"

#include "stdbool.h"


void SetSCL(GPIO_PinState v);
GPIO_PinState GetSDO(void);
uint8_t ReadKey8(void);
uint8_t GetKey8(void);
uint8_t ReadKeys8(void);
uint8_t GetKeys8(void);
uint8_t ReadKey16(void);
uint8_t GetKey16(void);
uint16_t ReadKeys16(void);
uint16_t GetKeys16(void);

void WaitForTouch(void);
void Key8(void);
void Keys8(void);
void Key16(void);
void Keys16(void);
bool IsTouch(void);
bool GetBit(void);

#endif /* INC_TTP229_H_ */
