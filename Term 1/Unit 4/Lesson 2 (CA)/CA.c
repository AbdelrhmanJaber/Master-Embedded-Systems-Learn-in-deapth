#ifndef _Collision_Avoidance_H_
#define _Collision_Avoidance_H_
#include "state.h"


enum {
    CA_waiting,
    CA_driving
}CA_state_id;


STATE_define(CA_waiting);
STATE_define(CA_driving);


extern void (*CA_state)();
#endif