#include <avr/io.h>
#include <util/delay.h>
 
#define BLINK_DELAY_MS 1000


void  pin5Off() {
    PORTB &= ~_BV(PORTB5);
}

void pin5On() {
    PORTB |= _BV(PORTB5);   
}


int main (void)
{
    /* set pin 5 of PORTB for output*/
    DDRB |= _BV(DDB5);
    
    int i = 0;
    while(i < 5) {
        // set pin 5 low to turn led off 
        pin5Off();    
        _delay_ms(500);

        // set pin 5 high to turn led on
        pin5On();
        _delay_ms(500);
        i += 1;
    }

    // set pin 5 low to turn led off 
    pin5Off();
    return 0;
}
