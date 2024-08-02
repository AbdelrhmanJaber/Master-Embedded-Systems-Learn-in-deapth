#include "US_Sensor.h"

extern void (*US_state)();


unsigned int distance ;

int generate_random(int l, int r, int count) {
    for (int i = 0; i < count; i++) {
        int rand_num = (rand() % (r - 1 + 1)) + 1;
        return rand_num ;
    }
}
void US_init ( )
{
    printf ("DC_init\n");
}
STATE_define(US_busy)
{
   
    US_state_id = US_busy ;
    distance = generate_random(45,55,1);
    printf ("US_busy state : distance=%d \n", distance);
    US_distance_set (distance);
    US_state =  STATE(US_busy) ; 
}