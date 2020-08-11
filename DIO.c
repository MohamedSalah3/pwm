/*
 * DIO.c
 *
 * Created: 17/02/2020 02:20:28 م
 *  Author: mo
 */

#include "DIO.h"
/*
*Input: DIO_Cfg_s -> to get PORT name, pins to be initiated and the required direction
*Output: No output
*In/Out:
*Description: This function can set the direction of a full port, a nibble
*         or even one pin.
*/


static uint8_t u8_is_init=0;
ERROR_STATUS DIO_init (DIO_Cfg_s *DIO_info)
{
  uint8_t RET=0;
  static uint8_t Multiple_init=0;
  if (DIO_info == NULL)
  {
    RET=NULL_PTR+DIO_MODULE;

  }else{
    u8_is_init=1;
    switch(DIO_info->dir)
    {
    case INPUT:
      switch(DIO_info ->GPIO)
      {
      case GPIOB:
        PORTB_DIR &=(~(DIO_info->pins)) ;
        Multiple_init+=2;
        break;
      case GPIOC:
        PORTC_DIR &=(~(DIO_info->pins)) ;
        Multiple_init+=3;
        break;
      case GPIOD:
        PORTD_DIR &=(~(DIO_info->pins)) ;
        Multiple_init+=4;
        break;
      default:
        RET=E_NOK+DIO_MODULE+INVALID_PORT;
        break;
      }
      break;

      case OUTPUT:
        switch(DIO_info ->GPIO)
        {
        case GPIOB:
          PORTB_DIR |=(DIO_info->pins)  ;
          Multiple_init+=2;
          break;
        case GPIOC:
          PORTC_DIR |=(DIO_info->pins)  ;
          Multiple_init+=3;
          break;
        case GPIOD:
          PORTD_DIR |=(DIO_info->pins)  ;
          Multiple_init+=4;
          break;
        default:
          RET=E_NOK+DIO_MODULE+INVALID_PORT;
          break;
        }

        break;
        default:
          RET=E_NOK+DIO_MODULE+INVALID_DIRECTION;
          break;
    }


  }
  return RET;
}

void DIO_deinit(void){
  u8_is_init=0;
}

void DIO_is_init(void){
  u8_is_init=1;
}

ERROR_STATUS DIO_Write (uint8_t GPIO, uint8_t pins, uint8_t value)
{uint8_t Ret=E_OK+DIO_MODULE;

if(u8_is_init==1){
switch(value){
case LOW:
{
  switch (GPIO)
  {
  case GPIOB:
    PORTB_DATA &= ~(pins);
    break;
  case GPIOC:
    PORTC_DATA &= ~(pins);
    break;
  case GPIOD:
    PORTD_DATA &= ~(pins);
    break;
  default:
    Ret+=INVALID_PORT;
    break;
  }
  break;
}
case HIGH:{
  switch (GPIO)
  { 
  case GPIOB:
    PORTB_DATA |=(pins);
    break;
  case GPIOC:
    PORTC_DATA |=(pins);
    break;
  case GPIOD:
    PORTD_DATA |=(pins);
    break;
  default:
    Ret+=INVALID_PORT;
    break;
  }
  break;
}
default:
  Ret+=INVALID_VALUE;
  break;
}

}else{Ret+=NOT_INIT;}
return Ret;
}


ERROR_STATUS DIO_Read (uint8_t GPIO,uint8_t pins, uint8_t *data)
{uint8_t ret=E_OK+DIO_MODULE;
if(u8_is_init==1){
  switch (GPIO)
  { 
  case GPIOB:
    *data=(PORTB_PIN & pins);
    break;
  case GPIOC:
    *data=(PORTC_PIN & pins);
    break;
  case GPIOD:
    *data=(PORTD_PIN & pins);
    break;
    default:
    ret+=INVALID_PORT;
    break;
  }
  if(*data > 0)
  {
    *data = 1;
  }
}else{ret+=NOT_INIT;}
return ret;
}
ERROR_STATUS DIO_Toggle (uint8_t GPIO, uint8_t pins)
{
  uint8_t ret=E_OK+DIO_MODULE;
if(u8_is_init==1){
  switch (GPIO)
  {
  case GPIOB:
    PORTB_DATA ^=(pins);
    break;
  case GPIOC:
    PORTC_DATA ^=(pins);
    break;
  case GPIOD:
    PORTD_DATA ^=(pins);
    break;
  default:
    ret+=INVALID_PORT;
    break;
  }
}else{ret+=NOT_INIT;}
  return ret;
}
