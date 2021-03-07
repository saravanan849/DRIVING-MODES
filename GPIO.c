/******************************************************************************
* File Name: gpio.c
* Description: This file contains gpio configuration.
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: SARAVANAN M V1.0 -March-2021.
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include "gpio.h"
/******************************************************************************
*                      Public functions definitions
******************************************************************************/
/******************************************************************************
* Name: GPIO configuration()
* Description:  The GPIO Driver configuration are done here.

* Arguments: None
* Returns: None
******************************************************************************/
void configuration()
{
    GPIO_PIN(PD1,INPUT);
    GPIO_PIN(PD4,INPUT);
    GPIO_PIN(PD5,INPUT);
    GPIO_PIN(PD7,INPUT);
    GPIO_PIN(PD3,INPUT);
    GPIO_PIN(PD6,OUTPUT);
    GPIO_PIN(PC2,OUTPUT);

}
/******************************************************************************
* Name: read pin()
* Description:  This function is used to read the pin, whether it is pressed
                or not

* Arguments: None
* Returns: None
******************************************************************************/
void readpin()
{
    Engine_status = GPIOPinRead(PD1);
    Comfort_mode_status = GPIOPinRead(PD4);
    Eco_mode_status = GPIOPinRead(PD5);
    Sport_mode_status = GPIOPinRead(PD7);
}
/******************************************************************************
* Name: GPIO_PIN(pin,mode)
* Description:  Configures the mode of the pin as INPUT with PULLUP
                Configuration or OUTPUT

* Arguments: pin and mode
* Returns: None
******************************************************************************/
void GPIO_PIN(int pin,int mode)
{
    if(pin == PD0 || pin == PD1 ||pin == PD2 ||pin == PD3 ||pin == PD4 ||pin == PD5 ||pin == PD6 ||pin == PD7  )

    {
        if(mode==INPUT)
    {
        CLR_BIT (DDRD,pin);
        SET_BIT(PORTD,pin);
    }
    else if(mode==OUTPUT)
    {
        SET_BIT(DDRD,pin);

    }
    }
    else if(pin == PC0 || pin == PC1 ||pin == PC2 ||pin == PC3 ||pin == PC4 ||pin == PC5 ||pin == PC6 )
    {
        if(mode==INPUT)
    {
        CLR_BIT (DDRC,pin);
        SET_BIT(PORTC,pin);
    }
    else if(mode==OUTPUT)
    {
        SET_BIT(DDRC,pin);

    }
    }

}
/******************************************************************************
* Name: GPIOPinRead(pin)
* Description:  It reads the GPIO pin.

* Arguments: pin
* Returns: 1 or 0
******************************************************************************/
int GPIOPinRead(int pin)
{

      if (PIND & (1<<pin))
      {

          return 1;
      }
      else{
        return 0;
      }
}

/******************************************************************************
******************************************************************************
*                      End of File
******************************************************************************/

