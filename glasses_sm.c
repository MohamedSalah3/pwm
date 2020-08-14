/*
 * glasses_sm.c
 *
 * Created: 14/08/2020 04:50:29 م
 *  Author: mo
 */
#include "glasses_sm.h"


void system_init(void)
{

Us_Init();
motor_init();
speaker_init();


}


void system_update(void)
{
uint16_t Distance = 0;
uint8_t state_machine=0;
Us_GetDistance(&Distance);
state_machine = 6
motor_start_sm(state_machine);
speaker_start_sm(state_machine);


}
