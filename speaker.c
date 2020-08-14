/*
 * speaker.c
 *
 * Created: 14/08/2020 04:25:20 م
 *  Author: mo
 */
#include "speaker.h"





ERROR_STATUS speaker_init(void)
{
  uint8_t ret =E_OK;
  	ret=DIO_init(&speaker_Configuration_0);
  return ret;
}

ERROR_STATUS speaker_start_sm(uint8_t state)
{
  uint8_t ret=E_OK;
switch (state) {
  case SPEAKER_STOP:
  DIO_Write(GPIOC,BIT3,LOW);
  break;
  case SPEAKER_TWO_M:
  if(timer2_interrupt_counter==1000){
  timer2_interrupt_counter=0;
  ret=DIO_Toggle(GPIOD,BIT1);
}
  break;
  case SPEAKER_ONE_HALF_M:
  if(timer2_interrupt_counter==500){
  timer2_interrupt_counter=0;
  ret=DIO_Toggle(GPIOD,BIT1);
}
  break;
  case SPEAKER_ONE_M:
  if(timer2_interrupt_counter==250){
  timer2_interrupt_counter=0;
  ret=DIO_Toggle(GPIOD,BIT1);
}
  break;
  case SPEAKER_HALF_M:
  if(timer2_interrupt_counter==125){
  timer2_interrupt_counter=0;
  ret=DIO_Toggle(GPIOD,BIT1);
}
  break;
  case SPEAKER_30_CM:
  if(timer2_interrupt_counter==75){
  timer2_interrupt_counter=0;
  ret=DIO_Toggle(GPIOD,BIT1);
}
break;
  case SPEAKER_20_CM:
  if(timer2_interrupt_counter==25){
  timer2_interrupt_counter=0;
  ret=DIO_Toggle(GPIOD,BIT1);
}
break;
  default:
ret=E_NOK;
  break;
}

return ret;
}
