
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
    char temper[10];

    if(ADC_val<=209){

        OCR1A = 205; //20% duty cycle
        temper[0] = '2';
        temper[1] = '0';
        temper[2] = 176;
        temper[3] = 'C';
        temper[4] = ' ';
        temper[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temper[i]);
        }
        _delay_ms(20);
    }
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A = 410; //40% duty cycle
        temper[0] = '2';
        temper[1] = '5';
        temper[2] = 176;
        temper[3] = 'C';
        temper[4] = ' ';
        temper[5] = '\0';
        for(i=0;i<5;i++){
            USARTWrite(temper[i]);
        }
        _delay_ms(20);
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A = 717;//70% duty cycle
        temper[0] = '2';
        temper[1] = '9';
        temper[2] = 176;
        temper[3] = 'C';
        temper[4] = ' ';
        temper[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temper[i]);
        }
        _delay_ms(20);
    }
    else if((ADC_val>=710) && (ADC_val<=1024)){

        OCR1A = 973; //95% duty cycle
        temper[0] = '3';
        temper[1] = '3';
        temper[2] = 176;
        temper[3] = 'C';
        temper[4] = ' ';
        temper[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temper[i]);
        }
        _delay_ms(20);
    }
    else{
        OCR1A = 0; //0% output
        temper[0] = 'O';
        temper[1] = 'F';
        temper[2] = 'F';
        temper[3] = ' ';
        temper[4] = ' ';
        temper[5] = '\0';
        for(i=0;i<=5;i++){
            USARTWrite(temper[i]);
        }
        _delay_ms(20);
    }

}

