/******************************************************************************
* File Name: eco.c
* Description:
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: SARAVANAN M V1.0 -March-2021.
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include "GPIO.h"
#include "adc.h"
#include "pwm.h"
#include "eco.h"
/******************************************************************************
*                      Public functions definitions
******************************************************************************/
/******************************************************************************
* Name: eco.h
* Description:  modes configuration is done here.

* Arguments: None
* Returns: None
******************************************************************************/
void eco()
{
    if((Comfort_mode_status == COMFORT_MODE_OFF) && (Sport_mode_status == SPORT_MODE_OFF))
    {
        adc();
        if(ADC_VALUE <= less_than_300)
        {
            OCR0A = duty_cycle_39;
        }
        else if((ADC_VALUE > greater_than_300)&&(ADC_VALUE <= less_than_600))
        {
            OCR0A = duty_cycle_77;
        }
        else if((ADC_VALUE > greater_than_600)&&(ADC_VALUE <= less_than_900))
        {
            OCR0A = duty_cycle_128;
        }
        else if((ADC_VALUE >greater_than_900))
        {
            OCR0A = duty_cycle_180;
        }
    }

}


/******************************************************************************
******************************************************************************
*                      End of File
******************************************************************************/




