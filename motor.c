/*
 * motor.c
 *
 * Created: 14/08/2020 04:24:33 م
 *  Author: mo
 */
#include "motor.h"



ERROR_STATUS motor_init(void)
{
uint8_t ret =E_OK;
ret=DIO_init(&motor_Configuration_0);
	ret=Pwm_Init(&PWM_Configuration_0);
return ret;
}


ERROR_STATUS motor_start_sm(uint8_t state)
{
  uint8_t ret=E_OK;
switch (state) {
  case MOTOR_STOP:
  break;
  case MOTOR_TWO_M:
  break;
  case MOTOR_ONE_HALF_M:
  break;
  case MOTOR_ONE_M:
  break;
  case MOTOR_HALF_M:
  break;
  case MOTOR_30_CM:
  break;
  case MOTOR_20_CM:
  break;
  default:

  break;
}


  return ret;
}
