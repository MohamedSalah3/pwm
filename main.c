/*
 * pwm.c
 *
 * Created: 10/08/2020 03:08:32 م
 *  Author: mo
 */
#include "glasses_sm.h"
static uint32_t timespend=0;
int main(void)
{
system_init();
	while(1)
    {
		//Pwm_Start(PWM_CH0,50,10);
		system_update();
    }
}
