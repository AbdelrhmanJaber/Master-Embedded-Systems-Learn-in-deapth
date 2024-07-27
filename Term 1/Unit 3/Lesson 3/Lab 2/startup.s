.section .vectors

.word 0x20001000 			/* stack top address */ 
.word _reset				/* 1 Reset */
.word Vector_Handler 		/* 2 NMI */
.word Vector_Handler 		/* 3 Hard Fault */
.word Vector_Handler 		/* 4 MM Fault */
.word Vector_Handler 		/* 5 Bus Fault */
.word Vector_Handler 		/* 6 Usage Fault */
.word Vector_Handler 		/* 7 RESERVED */
.word Vector_Handler 		/* 8 RESERVED */
.word Vector_Handler 		/* 9 RESERVED */
.word Vector_Handler 		/* 10 RESERVED */
.word Vector_Handler 		/* 11 SV Call */
.word Vector_Handler 		/* 12 Debug Reserved */
.word Vector_Handler 		/* 13 RESERVED */
.word Vector_Handler 		/* 14 PendSV */
.word Vector_Handler 		/* 15 SysTick */
.word Vector_Handler 		/* 16 IRQ0 */
.word Vector_Handler 		/* 17 IRQ1 */
.word Vector_Handler 		/* 18 IRQ2 */

		
		
.section .text
_reset:
	bl main
	b . 

.thumb_func 				
Vector_Handler:
	b _reset
	