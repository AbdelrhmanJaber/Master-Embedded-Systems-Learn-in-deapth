#ifndef US_SENSOR_H_
#define US_SENSOR_H_

#include "state.h"



enum {
	US_busy
}US_state_id;

ST_STATE_define(US_busy);

// STATE Pointer to Function
void (*US_state)();

void US_init();



#endif