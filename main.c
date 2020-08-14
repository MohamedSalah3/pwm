/*
 * pwm.c
 *
 * Created: 10/08/2020 03:08:32 م
 *  Author: mo
 */
#include "PWM.h"
#include "DIO.h"
#include "ICU.h"
static uint32_t timespend=0;
int main(void)
{
/*	DIO_init(&Dio_configurationD);
	motor_init();
	DIO_Write(GPIOD,PIN6,HIGH);
    Us_Init();
	*/
system_init();
	while(1)
    {
		/*
	Pwm_Start(PWM_CH0,60,10);
	Us_Trigger();
	Us_GetDistance(&timespend);
*/
		system_update();
    }
}
