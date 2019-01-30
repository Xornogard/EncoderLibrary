/*
 * EncoderLibrary.c
 *
 * Created: 30.01.2019 13:57:38
 * Author : Xornogard
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include "encoderlib/encoder.h"

int main(void)
{
	DDRB = 0xFF;

	uint8_t led_position = 0;

	enc_init();
	
    /* Replace with your application code */
    while (1) 
    {
		while (1)
		{
			led_position = enc_value%8;
			PORTB = ~(1 << led_position);
		}
    }
}

