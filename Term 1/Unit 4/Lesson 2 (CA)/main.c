#include "CA.h"
#include "DC_motor.h"
#include "US_sensor.h"


void setup(void)
{
	US_init();
	DC_init();
	CA_state = ST_STATE(CA_waiting);
	US_state = ST_STATE(US_busy);
	DC_state = ST_STATE(DC_idle);
}

int main(void)
{
	volatile int i;
	setup();

	while(1)
	{
		US_state();
		CA_state();
		DC_state();
		for(i = 0 ; i <= 50000 ; i++); //delay
	}
	return 0;
}