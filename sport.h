
***/**********************************************************************************
* File Name: sport.h
* Description: This file contains function Prototypes and values of sport.c
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: SARAVANAN M V1.0  -March-2021
* Description: V1.0
*
*************************************************************************************/
#ifndef SPORT_H
#define SPORT_H
/*************************************************************************************
* Includes
*************************************************************************************/
#include<avr/io.h>
#include<util/delay.h>
/*************************************************************************************
* Defines
*************************************************************************************/
#define duty_cycle_103 103
#define duty_cycle_154 154
#define duty_cycle_205 205
#define duty_cycle_255 255

/*************************************************************************************
*                      Public function prototypes
*************************************************************************************/
extern void sport();
#endif //
/*************************************************************************************
* End of File
*************************************************************************************/





