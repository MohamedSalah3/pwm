/*
 * PWM_Config.h
 *
 * Created: 17/02/2020 04:21:55 م
 *  Author: mo
 */


#ifndef PWM_CONFIG_H_
#define PWM_CONFIG_H_



/*********************************/
/*            MACROS             */
/*********************************/


#include "std_types.h"
#include "registers.h"
#define PWM_CH0  (0)
#define PWM_CH1A (1)
#define PWM_CH1B (2)
#define PWM_CH2  (3)
/**********************************************************/
#define   PWM_PRESCALER_NO        (0x0000)
#define   PWM_PRESCALER_8         (0x0100)
#define   PWM_PRESCALER_32        (0x0200)
#define   PWM_PRESCALER_64        (0x0300)
#define   PWM_PRESCALER_128       (0x0400)
#define   PWM_PRESCALER_256       (0x0500)
#define   PWM_PRESCALER_1024        (0x0600)
/*****************************************************/
#define MAX_HOLD 255
#define MAX_HOLD_T1 65535
#define FULL_SPEED 100
/****************************************************/
#define E_OK 0
#define E_NOK 1
typedef uint8_t ERROR_STATUS;
/****************************************************/
typedef struct Pwm_Cfg_s
{
  uint8_t Channel;
  uint8_t Prescaler;
}Pwm_Cfg_s;
/*****************************************************/
extern Pwm_Cfg_s PWM_Configuration_0;
extern Pwm_Cfg_s PWM_Configuration_1A;
extern Pwm_Cfg_s PWM_Configuration_1B;
extern Pwm_Cfg_s PWM_Configuration_2;

/****************************************************/
#define T1_OC1A_CLEAR 0x8000
#define T1_OC1B_CLEAR 0x2000
#define T1_OC1A_OC1B  0xA000
/****************************************************/
#define T1_PWM_Phase_8 0x0120

#define T0_PWM_FAST  0x0003
#define T0_INVERTING 0x0040
#define T0_NON_INVERTING 0x0080

#define T2_PWM_FAST  0x48
#define T2_NON_INVERTING 0x20
/*********************************************************/
#define TIMER_STOPT02 0xF8
#define TIMER_STOPT1 0xF8FF
/***********************************************************/
#define   PWM_PRESCALER_NO_CONFIG       (0x0100)
#define   PWM_PRESCALER_8_CONFIG        (0x0200)
#define   PWM_PRESCALER_64_CONFIG       (0x0300)
#define   PWM_PRESCALER_256_CONFIG      (0x0400)
#define   PWM_PRESCALER_1024_CONFIG     (0x0500)

/****************************************************/
#define   PWM_PRESCALER_32_CONFIG_T2        (3)
#define   PWM_PRESCALER_64_CONFIG_T2        (4)
#define   PWM_PRESCALER_128_CONFIG_T2       (5)
#define   PWM_PRESCALER_256_CONFIG_T2       (6)
#define   PWM_PRESCALER_1024_CONFIG_T2      (7)

#endif /* PWM_CONFIG_H_ */
