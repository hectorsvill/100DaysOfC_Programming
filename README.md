# 100DaysOfC_Programming
Review
#
#

#### Day 1 - intro to embeded systems
 - Setup enviroment for learning embeded systems with arduino, esp8266, raspberry pi

- setup
```bash
brew install avrdude
brew tap osx-cross/avr
brew install avr-gcc
```

- to compile and write hex to arduino 
```bash
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o intro.o intro.c
avr-gcc -mmcu=atmega328p intro.o -o intro
avr-objcopy -O ihex -R .eeprom intro intro.hex
avrdude -F -V -c arduino -p ATMEGA328P -P /dev/cu.usbmodem141101 -b 115200 -U flash:w:intro.hex

```

```c
#include <avr/io.h>
#include <util/delay.h>

void  pin5Off() {
    PORTB &= ~_BV(PORTB5);
}

void pin5On() {
    PORTB |= _BV(PORTB5);   
}

int main (void)
{
    // set pin 5 of PORTB for output
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

```

#

#### Day 2 - Review C Strings, input and output 

```c
void writeString(char *str) {
    while (*str)
        write(0, str++, 1);
}

void copyInputToOutput() {
    int c;
    
    c = getchar();
    while (c != EOF) {
        
        if (c == 100) {
            break;
        }
        putchar(c);
        c = getchar();
    }
}

```
#### Day 3 - Review Functions, Function Definitions

```c
int power(int, int);

int power(int base, int n)
{
    int p = 1;
    int i = 0;

    for (i = 1; i <= n; i++)
        p *= base;
    return p;
}
```
#### Day 4 - Review pointes
```c
void swap(int *a, int *b)
{
    int temp = *a;
    
    *a = *b;
    *b = temp;
}


```
#### Day 5 - Reverse a String
```c
char* reverseString(char *str, int length)
{
    char* reverseStr = (char*)malloc(length + 1);

    for (int i = 0; i < length; i++) {
        reverseStr[i] = str[length - 1 - i];
    }
    
    reverseStr[length] = 0;

    return reverseStr;
}

```


#### Day 6- 
#### Day 7 - 
#### Day 8 - 
#### Day 9 - 
#### Day 10 - 
#### Day 11 - 
#### Day 12 - 
#### Day 13 - 
