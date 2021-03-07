***/**********************************************************************************
* File Name: GPIO.h
* Description: This file contains function Prototypes of GPIO.c
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: SARAVANAN M V1.0  -March-2021
* Description: V1.0
*
*************************************************************************************/
#ifndef GPIO_H
#define GPIO_H
/*************************************************************************************
* Includes
*************************************************************************************/
#include<avr/io.h>
#include<util/delay.h>
/*************************************************************************************
* Defines
*************************************************************************************/
#define SET_BIT(PORT,BIT) PORT |= (1<<BIT)
#define CLR_BIT(PORT,BIT) PORT &= ~(1<<BIT)
enum state
{
    INPUT,
    OUTPUT
}i_o;
enum values
{
    less_than_300= 300,
    greater_than_300 = 300,
    less_than_600 = 600,
    greater_than_600 = 600,
    less_than_900 = 900,
    greater_than_900 = 900
};
#define ENGINE_ON 1
#define ENGINE_OFF 0
#define COMFORT_MODE_ON 1
#define ECO_MODE_ON 1
#define SPORT_MODE_ON 1
#define COMFORT_MODE_OFF 0
#define ECO_MODE_OFF 0
#define SPORT_MODE_OFF 0

/*************************************************************************************
*                      Global variables
*************************************************************************************/
unsigned int Engine_status, Comfort_mode_status, Eco_mode_status, Sport_mode_status;
/*************************************************************************************
*                      Public function prototypes
*************************************************************************************/
extern void configuration();
extern void readpin();
extern void GPIO_PIN(int,int);
extern int GPIOPinRead(int);
#endif //
/*************************************************************************************
* End of File
*************************************************************************************/



