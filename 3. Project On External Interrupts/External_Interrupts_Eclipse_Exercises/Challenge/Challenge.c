/*
 * challenge.c
 *
 * Created: 12/7/2013 9:08:25 PM
 * Author: Mohamed Tarek
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

/* External INT2 Interrupt Service Routine */
ISR(INT2_vect)
{
	if(PORTC == 9)	PORTC=0;
	else PORTC++;		
}

/* External INT2 enable and configuration function */
void INT2_Init(void){
	SREG   &= ~(1<<7);      // Disable interrupts by clearing I-bit
	GICR   |= (1<<INT2);	// Enable external interrupt pin INT2
	MCUCSR |= (1<<ISC2);    // Trigger INT2 with the raising edge
	SREG   |= (1<<7);       // Enable interrupts by setting I-bit
}

int main(void)
{
	DDRC = 0xFF; 			// Configure all pins in PORTC as output pins.
	PORTC = 0; 				// Initialization 7-seg display zero at the beginning.
	
	DDRB  &= (~(1<<PB2));   // Configure INT2/PB2 as input pin
	
	INT2_Init(); 			// Enable and configure external INT2
	
    while(1)
    {
						
	}					
}
