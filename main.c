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
	DIO_init(&Dio_configurationD);
	Pwm_Init(&PWM_Configuration_0);
	DIO_Write(GPIOD,PIN6,HIGH);
  Icu_Init(&ICU_Configuration);
	while(1)
    {
		Pwm_Start(PWM_CH0,60,10);
	  Icu_ReadTime(ICU_CH0,ICU_RISE_TO_FALL,&timespend);
    }
}
