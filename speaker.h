/*
 * speaker.h
 *
 * Created: 14/08/2020 04:25:34 م
 *  Author: mo
 */


#ifndef SPEAKER_H_
#define SPEAKER_H_

#include "DIO.h"
#include "timers.h"

#define SPEAKER_STOP 0
#define SPEAKER_TWO_M 1
#define SPEAKER_ONE_HALF_M 2
#define SPEAKER_ONE_M 3
#define SPEAKER_HALF_M 4
#define SPEAKER_30_CM 5
#define SPEAKER_20_CM 6



ERROR_STATUS speaker_init(void);

ERROR_STATUS speaker_start_sm(uint8_t state);





#endif /* SPEAKER_H_ */
