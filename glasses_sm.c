/*
 * glasses_sm.c
 *
 * Created: 14/08/2020 04:50:29 م
 *  Author: mo
 */
#include "glasses_sm.h"

static uint32_t ticks=0;
void system_init(void)
{

Us_Init();
motor_init();
speaker_init();


}


void system_update(void)
{
static uint16_t Distance = 0;
static uint8_t state_machine=0;
Us_Trigger();
Us_GetDistance(&Distance);


ticks=Distance;
if (Distance>200)
{
	state_machine=0;
}
if (Distance <= 200 && Distance > 150)
{
	state_machine = 1;
}
if (Distance <= 150 && Distance > 100)
{
	state_machine = 2;
}
if (Distance <= 100 && Distance > 50)
{
	state_machine = 3;
}
if (Distance <= 50 && Distance > 30)
{
	state_machine = 4;
}
if (Distance <= 30 && Distance > 20)
{
	state_machine = 5;
}
if (Distance <= 20 && Distance > 0)
{
	state_machine = 6;
}

motor_start_sm(state_machine);
speaker_start_sm(state_machine);

}
