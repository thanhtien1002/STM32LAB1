/*
 * EX_1.c
 *
 *  Created on: Sep 24, 2024
 *      Author: ASUS
 */
#include <EX.h>
#include "main.h"

void EX_1(void) {
    HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
    HAL_Delay(2000);
    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
    HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
    HAL_Delay(2000);
}

