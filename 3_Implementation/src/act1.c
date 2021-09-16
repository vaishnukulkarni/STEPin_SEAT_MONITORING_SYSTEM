

#include <avr/io.h>
#include <util/delay.h>
#include "act1.h"


void Buttons_LED_Init()
{
     /*Configure LED and Switch pins*/
    DDRB|=(1<<PB0);//setting PB0=1 for led
    DDRD&=~(1<<PD0);//making it 0
    PORTD|=(1<<PD0);//matching bit
    DDRD&=~(1<<PD4);//making 0
     PORTD|=(1<<PD4);//setting bit
     while(1)
     {
         if(!(PIND&(1<<PD0)))
         {
             if(!(PIND&(1<<PD4)))
             {
                 PORTB|=(1<<PB0);
             }
             else
                {
                PORTB&=~(1<<PB0);
             }
         }
         else
            {
            PORTB&=~(1<<PB0);
         }
     }
}
