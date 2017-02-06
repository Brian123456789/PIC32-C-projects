/* 
 * File:   main.c
 * Author: brian
 *
 * Created on February 6, 2017, 6:32 AM
 */
#include <p32xxxx.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
// configure all PORTA pins as output
TRISB = 0;
AD1PCFG=0xffff; /* all PORTB as digital.PORTB shares analog and digital functionality
and is analog by default.It is disconnected from the digital input/output. To
get it to work you have to specify you want to use digital. Hint: if you get the Data sheet
for the PIC32MX3xx and search for AD1PCFG you will get a clearer picture why.*/
PORTB = 0xff;
}

