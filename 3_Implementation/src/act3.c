
#include <avr/io.h>
#include <util/delay.h>
#include "act3.h"
#include "act4.h"
#include <string.h>


void TimerWaveGenMode(void){

    SET_TIMER1A_FAST_PWM; //setting timer1 for PWM
    PRESCALE_TIMER_64; //8 prescalar
    SET_PWM_AS_OUTPUT; //Setting PB1 as output pin

}


int outputbyPWM(uint16_t ADC_val){
    int i;
    char temperature[10];

    if(ADC_val<=209){

        OCR1A = 205; //20% duty cycle
        temperature[0] = '2';
        temperature[1] = '0';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temperature[i]);
        }
        _delay_ms(20);
    }
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A = 410; //40% duty cycle
        temperature[0] = '2';
        temperature[1] = '5';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<5;i++){
            USARTWrite(temperature[i]);
        }
        _delay_ms(20);
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A = 717;//70% duty cycle
        temperature[0] = '2';
        temperature[1] = '9';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temperature[i]);
        }
        _delay_ms(20);
    }
    else if((ADC_val>=710) && (ADC_val<=1024)){

        OCR1A = 973; //95% duty cycle
        temperature[0] = '3';
        temperature[1] = '3';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temperature[i]);
        }
        _delay_ms(20);
    }
    else{
        OCR1A = 0; //0% output
        temperature[0] = 'O';
        temperature[1] = 'F';
        temperature[2] = 'F';
        temperature[3] = ' ';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temperature[i]);
        }
        _delay_ms(20);
    }

}
