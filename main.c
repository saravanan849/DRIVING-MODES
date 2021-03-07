/*
 */

#include "GPIO.h"
#include "adc.h"
#include "pwm.h"
#include "interrupt.h"
#include "modes.h"

int main(void)
{
    configuration();
    interrupt_config();
    pwm_config();
    adc_config();

    while(1)
    {
        modes();
    }
    ;

    return 0;
}
