

#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED



#define F_CPU 16000000UL 	//Clock is set to 16 MHz

#include<avr/io.h>
#include <util/delay.h>
#include <stdint.h>


void InitUSART(uint16_t);


char USARTRead();



void USARTWrite(uint16_t);

#endif
