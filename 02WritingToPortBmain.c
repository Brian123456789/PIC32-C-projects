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
AD1PCFG=0xffff; 
  
 /* all PORTB as digital.PORTB shares analog and digital functionality
and is analog by default.It is disconnected from the digital input/output. To
get it to work you have to specify you want to use digital. Hint: if you get the Data sheet
for the PIC32MX3xx and search for AD1PCFG you will get a clearer picture why.

Rule of thumb: Always read inputs from PORTx and write outputs to LATx. If you need to read 
what you set an output to, read LATx.

This is addressed adequatly by Newnes: By default, pins multiplexed with “ analog ” inputs 
are disconnected from their “ digital ”
input ports. This explains what was happening during our last attempt. All PortB pins
of the PIC32 are, by default at power-up, assigned an analog input function; therefore,
reading the PORTB register returns all 0 s. Notice, though, that the output latch of PortB
has been correctly set, although we cannot see it through the PORTB register. To verify it,
check the contents of the LATB register instead.
To reconnect the PortB input pins to the digital inputs, we have to act on the ADC module
configuration. From the datasheet, we learn that the SFR AD1PCFG controls the analog/
digital assignment of each pin (see Figure 1.7 ).
Assigning a 1 to each bit in the AD1PCGF SFR will accomplish the task and convert the
pin into a digital input.*/

PORTB = 0xff;//write 1's to PORTB
//LATB = 0xFF;  better practice to write output to LATx but the above does work now
}

