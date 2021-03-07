/******************************************************************************
* File Name: modes.c
* Description: Different modes of driving are selected here.
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
#include "modes.h"
/******************************************************************************
*                      Public functions definitions
******************************************************************************/
/******************************************************************************
* Name: modes()
* Description:  modes configuration is done here.

* Arguments: None
* Returns: None
******************************************************************************/
void modes()
{
    if(Engine_status == ENGINE_ON)
    {
        if(Comfort_mode_status == COMFORT_MODE_ON)
        {
            comfort();
        }
        else if(Eco_mode_status == ECO_MODE_ON)
        {
            eco();
        }
        else if(Sport_mode_status == SPORT_MODE_ON)
        {
            sport();
        }
    }
    else
    {
        panic();
    }

}


/******************************************************************************
******************************************************************************
*                      End of File
******************************************************************************/


