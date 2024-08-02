#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "state.h"


enum {
	DC_idle,
	DC_busy
}DC_status_id;


ST_STATE_define(DC_idle);
ST_STATE_define(DC_busy);

void DC_init();

extern void (*DC_state)();


#endif 