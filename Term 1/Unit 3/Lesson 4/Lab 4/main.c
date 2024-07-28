#include "Platform_Types.h"
#include "Bit_Math.h"


#define SYSCTL_BASE 		0x400FE000
#define GPIOF_BASE 			0x40025000

#define SYSCTL_RCGC2_R 		*((vuint32_t*) (SYSCTL_BASE + 0x108))
#define GPIO_PORTF_DATA_R 	*((vuint32_t*) (GPIOF_BASE + 0x3FC))
#define GPIO_PORTF_DIR_R 	*((vuint32_t*) (GPIOF_BASE + 0x400))
#define GPIO_PORTF_DEN_R	*((vuint32_t*) (GPIOF_BASE + 0x51C))


void relay_count(uint32_t count);

int main()
{
	ASSIGN_REG(SYSCTL_RCGC2_R, 0x20); 
	relay_count(200);

	SET_BIT(GPIO_PORTF_DIR_R, 3); 
	
	SET_BIT(GPIO_PORTF_DEN_R, 3); 
	
	
	while(1)
	{
		TOGGLE_BIT(GPIO_PORTF_DATA_R, 3);
		relay_count(200000);
		TOGGLE_BIT(GPIO_PORTF_DATA_R, 3);
		relay_count(200000);
	}

	return 0;
}

void relay_count(uint32_t count)
{
	vuint32_t delayCounter;
	
	for (delayCounter = 0; delayCounter < count; ++delayCounter);
}