#include "uart.h"


#define UART0DR *((volatile unsigned int* const)((unsigned int*)0x101f1000)) 


void Uart_Send_String(unsigned char* P_TX_Sting)
{
	while(*P_TX_Sting != '\0') 
	{
		UART0DR = (unsigned int)(*P_TX_Sting); 
		P_TX_Sting++; 
	}
}