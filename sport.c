/******************************************************************************
* File Name: sport.c
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
#include "sport.h"
/******************************************************************************
*                      Public functions definitions
******************************************************************************/
/******************************************************************************
* Name: sport()
* Description:  modes configuration is done here.

* Arguments: None
* Returns: None
******************************************************************************/
void sport()
{
    if((Eco_mode_status == ECO_MODE_OFF) && (Comfort_mode_status == COMFORT_MODE_OFF))
    {
        adc();
        if(ADC_VALUE <= less_than_300)
        {
            OCR0A = duty_cycle_103;
        }
        else if((ADC_VALUE > greater_than_300)&&(ADC_VALUE <= less_than_600))
        {
            OCR0A = duty_cycle_154;
        }
        else if((ADC_VALUE > greater_than_600)&&(ADC_VALUE <= less_than_900))
        {
            OCR0A = duty_cycle_205;
        }
        else if((ADC_VALUE >greater_than_900))
        {
            OCR0A = duty_cycle_255;
        }
    }

}


/******************************************************************************
******************************************************************************
*                      End of File
******************************************************************************/




