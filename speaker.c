/*
 * speaker.c
 *
 * Created: 14/08/2020 04:25:20 م
 *  Author: mo
 */
#include "speaker.h"



static uint16_t counter=0;

ERROR_STATUS speaker_init(void)
{
  uint8_t ret =E_OK;
  	ret=DIO_init(&speaker_Configuration_0);
  return ret;
}

ERROR_STATUS speaker_start_sm(uint8_t state)
{
  uint8_t ret=E_OK;
  
  if (timer2_interrupt_raised)
  {
	  counter++;
  }
switch (state) {
	case SPEAKER_STOP:
		 DIO_Write(GPIOC,BIT3,LOW);
		 DIO_Write(GPIOD,BIT7,LOW);
	break;
	case SPEAKER_TWO_M:
		if(counter < 43)
		 {
			  DIO_Write(GPIOC,BIT3,LOW);
			  DIO_Write(GPIOD,BIT7,LOW);
		}
		else if(counter >= 43 && counter <= 63)
		{
			DIO_Write(GPIOC,BIT3,HIGH);
		    DIO_Write(GPIOD,BIT7,HIGH);
		
		
		}else{counter=0;}
  
   break;
  case SPEAKER_ONE_HALF_M:
  if(counter < 37)
  {
	  DIO_Write(GPIOC,BIT3,LOW);
	  DIO_Write(GPIOD,BIT7,LOW);
  }else if(counter >= 37 && counter <= 63)
  {  DIO_Write(GPIOC,BIT3,HIGH);
	  DIO_Write(GPIOD,BIT7,HIGH);
	 
  }else{counter=0;}
  
  break;
  case SPEAKER_ONE_M:
  if(counter < 31)
  {
	  DIO_Write(GPIOC,BIT3,LOW);
	  DIO_Write(GPIOD,BIT7,LOW);
  }else if(counter >= 31 && counter <= 63)
  {  DIO_Write(GPIOC,BIT3,HIGH);
	  DIO_Write(GPIOD,BIT7,HIGH);  
  }else{counter=0;}
  break;
  case SPEAKER_HALF_M:
  if(counter < 25)
  {
	  DIO_Write(GPIOC,BIT3,LOW);
	  DIO_Write(GPIOD,BIT7,LOW);
  }else if(counter >= 25 && counter <= 63)
  {  DIO_Write(GPIOC,BIT3,HIGH);
	  DIO_Write(GPIOD,BIT7,HIGH);
	  
  }else{
	  counter=0;
	  }
    break;
  case SPEAKER_30_CM:
 if(counter < 19)
 {
	 DIO_Write(GPIOC,BIT3,LOW);
	 DIO_Write(GPIOD,BIT7,LOW);
 }else if(counter >= 19 && counter <= 63)
 {  DIO_Write(GPIOC,BIT3,HIGH);
	 DIO_Write(GPIOD,BIT7,HIGH);
	 
 }else{counter=0;}
break;
  case SPEAKER_20_CM:
 if(counter < 13)
 {
	 DIO_Write(GPIOC,BIT3,LOW);
	 DIO_Write(GPIOD,BIT7,LOW);
 }else if(counter >= 13 && counter <= 63)
 {  DIO_Write(GPIOC,BIT3,HIGH);
	 DIO_Write(GPIOD,BIT7,HIGH);
 }else{counter=0;}
break;
  default:
ret=E_NOK;
  break;
}

return ret;
}
