/*
 * DIO_config.c
 *
 * Created: 17/02/2020 03:53:11 م
 *  Author: mo
 */

#include "DIO_config.h"

DIO_Cfg_s Dio_configurationB= {
  GPIOB,
  FULL_PORT,
  OUTPUT
};

DIO_Cfg_s Dio_configurationC= {
  GPIOC,
  FULL_PORT,
  OUTPUT
};

DIO_Cfg_s Dio_configurationD= {
  GPIOD,
  BIT6,
  OUTPUT
};
DIO_Cfg_s speaker_Configuration_0= {
  GPIOD,
  BIT6,
  OUTPUT
};
DIO_Cfg_s motor_Configuration_0 = {
  GPIOD,
  BIT6,
  OUTPUT
};
