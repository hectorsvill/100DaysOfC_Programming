# 100DaysOfC_Programming
 some C Programing a day keeps the doctor away 😁
#

#### Day 1
 - Setup enviroment for learning embeded systems with arduino, esp8266, raspberry pi


```bash
brew install avrdude
brew tap osx-cross/avr
brew install avr-gcc
```

compile and run
```bash
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o intro.o intro.c
avr-gcc -mmcu=atmega328p intro.o -o intro
avr-objcopy -O ihex -R .eeprom intro intro.hex
avrdude -F -V -c arduino -p ATMEGA328P -P /dev/cu.usbmodem141101 -b 115200 -U flash:w:intro.hex

```

```c
#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
    /* set pin 5 of PORTB for output*/
    DDRB |= _BV(DDB5);
 
    while(1) {
        // set pin 5 low to turn led off 
        PORTB &= ~_BV(PORTB5);
        _delay_ms(500);

        // set pin 5 high to turn led on
        PORTB |= _BV(PORTB5);
        _delay_ms(100);
    
    }
    return 0;
}

```

