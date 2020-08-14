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
  break;
  case SPEAKER_TWO_M:
  break;
  case SPEAKER_HALF_M:
  break;
  case SPEAKER_ONE_M:
  break;
  case SPEAKER_HALF_M:
  break;
  case SPEAKER_30_CM:
  break;
  case SPEAKER_20_CM:
  break;
  default:

  break;
}


  return ret;
}



}
