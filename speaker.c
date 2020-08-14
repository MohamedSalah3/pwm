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
  static uint16_t counter=0;
  if (timer2_interrupt_raised)
  {
	  counter++;
  }
switch (state) {
  case SPEAKER_STOP:
  DIO_Write(GPIOC,BIT3,LOW);
  break;
  case SPEAKER_TWO_M:
  if(counter==100){
  counter=0;
  ret=DIO_Toggle(GPIOC,BIT3);
}
  break;
  case SPEAKER_ONE_HALF_M:
  if(counter==50){
  counter=0;
  ret=DIO_Toggle(GPIOC,BIT3);
}
  break;
  case SPEAKER_ONE_M:
  if(counter==25){
  counter=0;
  ret=DIO_Toggle(GPIOC,BIT3);
}
  break;
  case SPEAKER_HALF_M:
  if(counter==12){
  counter=0;
  ret=DIO_Toggle(GPIOC,BIT3);
}
  break;
  case SPEAKER_30_CM:
  if(counter==7){
  counter=0;
  ret=DIO_Toggle(GPIOC,BIT3);
}
break;
  case SPEAKER_20_CM:
  if(counter==2){
  counter=0;
  ret=DIO_Toggle(GPIOC,BIT3);
}
break;
  default:
ret=E_NOK;
  break;
}

return ret;
}
