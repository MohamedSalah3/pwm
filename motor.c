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
DIO_Write(GPIOD,PIN6,HIGH);
ret=Pwm_Init(&PWM_Configuration_0);
return ret;
}


ERROR_STATUS motor_start_sm(uint8_t state)
{
  uint8_t ret=E_OK;
  static uint8_t speed=0;
    static uint16_t counter=0;
	 Pwm_Start(PWM_CH0,80,10);
    if (timer2_interrupt_raised)
    {
	    counter++;
    }
switch (state) {
  case MOTOR_STOP:

//DIO_Write(GPIOD,BIT7,LOW);
  break;
  case MOTOR_TWO_M:
 speed=10;
  if(counter==100){
  counter=0;
  //DIO_Write(GPIOD,BIT7,HIGH);
}

  break;
  speed=20;
  case MOTOR_ONE_HALF_M:
  if(counter==50){
  counter=0;
  //DIO_Write(GPIOD,BIT7,HIGH);
  }

  break;
  case MOTOR_ONE_M:
  speed=30;
  if(counter==25){
  counter=0;
 // DIO_Write(GPIOD,BIT7,HIGH);
}
  break;
  case MOTOR_HALF_M:
speed=50;
  if(counter==12){
  counter=0;
  //DIO_Write(GPIOD,BIT7,HIGH);
}

  break;
  case MOTOR_30_CM:
  
speed=70;
  if(counter==7){
  counter=0;
 // DIO_Write(GPIOD,BIT7,HIGH);
}

  break;
  case MOTOR_20_CM:

speed=90;
  if(counter==2){
  counter=0;
 // DIO_Write(GPIOD,BIT7,HIGH);
}

  break;
  default:
ret=E_NOK;
  break;
}


  return ret;
}
