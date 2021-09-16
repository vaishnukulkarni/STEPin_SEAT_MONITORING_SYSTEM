
#include<avr/io.h>
#include"act2.h"

void InitADC()
{
    ADMUX=(1<<REFS0);   //AVCC = +5V
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}



uint16_t ReadADC(uint8_t ch)
{
    //Select ADC Channel(ch) which must be from 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    //start single Conversion
    ADCSRA|=(1<<ADSC);

    //wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));

    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
