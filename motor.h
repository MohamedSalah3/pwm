/*
 * motor.h
 *
 * Created: 14/08/2020 04:25:02 م
 *  Author: mo
 */


#ifndef MOTOR_H_
#define MOTOR_H_
#include "PWM.h"

#define MOTOR_STOP 0
#define MOTOR_TWO_M 1
#define MOTOR_ONE_HALF_M 2
#define MOTOR_ONE_M 3
#define MOTOR_HALF_M 4
#define MOTOR_30_CM 5
#define MOTOR_20_CM 6



ERROR_STATUS motor_init(void);

ERROR_STATUS motor_start_sm(uint8_t state);


#endif /* MOTOR_H_ */
