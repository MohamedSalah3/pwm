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
Pwm_Stop(PWM_CH0);
DIO_Write(GPIOD,BIT7,LOW);
  break;
  case MOTOR_TWO_M:
  if(timer2_interrupt_counter==1000){
  timer2_interrupt_counter=0;
  DIO_Write(GPIOD,BIT7,HIGH);
}
Pwm_Start(PWM_CH0,10,10);
  break;
  case MOTOR_ONE_HALF_M:
  if(timer2_interrupt_counter==500){
  timer2_interrupt_counter=0;
  DIO_Write(GPIOD,BIT7,HIGH);
  }
Pwm_Start(PWM_CH0,20,10);
  break;
  case MOTOR_ONE_M:
  if(timer2_interrupt_counter==250){
  timer2_interrupt_counter=0;
  DIO_Write(GPIOD,BIT7,HIGH);
}
  Pwm_Start(PWM_CH0,30,10);
  break;
  case MOTOR_HALF_M:
  if(timer2_interrupt_counter==125){
  timer2_interrupt_counter=0;
  DIO_Write(GPIOD,BIT7,HIGH);
}
  Pwm_Start(PWM_CH0,50,10);
  break;
  case MOTOR_30_CM:
  if(timer2_interrupt_counter==75){
  timer2_interrupt_counter=0;
  DIO_Write(GPIOD,BIT7,HIGH);
}
  Pwm_Start(PWM_CH0,70,10);
  break;
  case MOTOR_20_CM:
  if(timer2_interrupt_counter==25){
  timer2_interrupt_counter=0;
  DIO_Write(GPIOD,BIT7,HIGH);
}
  Pwm_Start(PWM_CH0,90,10);
  break;
  default:
ret=E_NOK;
  break;
}


  return ret;
}
