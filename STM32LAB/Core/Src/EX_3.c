/*
 * EX_2.c
 *
 *  Created on: Sep 24, 2024
 *      Author: ASUS
 */

#include "main.h"
#include <EX.h>

//void EX_2(void){
//		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
//		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
//		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
//		HAL_Delay(5000);
//		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
//		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
//		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
//		HAL_Delay(3000);
//		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
//		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
//		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
//		HAL_Delay(2000);
//}

void EX_3(void){
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
		HAL_Delay(5000);

		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
		HAL_Delay(2000);

		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_Delay(5000);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
		HAL_Delay(2000);
}
