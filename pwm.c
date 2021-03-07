/******************************************************************************
* File Name: pwm.c
* Description: This file contains interrupt configuration.
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: SARAVANAN M V1.0 -March-2021.
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include"pwm.h"
/******************************************************************************
*                      Public functions definitions
******************************************************************************/
/******************************************************************************
* Name: pwm_config()
* Description:  Fast pwm mode is selected and pre-scaler is set to 1024

* Arguments: None
* Returns: None
******************************************************************************/

void pwm_config()
{
    TCCR0A |= ((1<<WGM00) | (1<<WGM01));    //setting it to fast PWM mode
    TCCR0A |= (1<<COM0A1);
    TCCR0A &= ~(1<<COM0A0);
    TCNT0 = 0x00;

    TCCR0B |= ((1<<CS00) | (1<<CS02)); //Prescaler setting 1024
    TCCR0B &= ~(1<<CS01);
}



/******************************************************************************
******************************************************************************
*                      End of File
******************************************************************************/


