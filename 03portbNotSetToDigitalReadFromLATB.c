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
TRISA = 0;
//PORTA = 0xff;
LATA = 0xFF;// note:writing to LatA works.



TRISB = 0;
//AD1PCFG=0xffff; 

//Remember last time we read from Newnes:
//By default, pins multiplexed with ? analog ? inputs are disconnected from their ? digital ?
//input ports. This explains what was happening during our last attempt. All PortB pins
//of the PIC32 are, by default at power-up, assigned an analog input function; therefore,
//reading the PORTB register returns all 0 s. Notice, though, that the output latch of PortB
//has been correctly set, although we cannot see it through the PORTB register. To verify it,
//check the contents of the LATB register instead.

//Another trick, is instead of writing to the PORTx outputs, we can write to the latch. 
//Rule of thumb: Always read inputs from PORTx and write outputs to LATx. If you need to read 
//what you set an output to, read LATx.

//PORTB = 0xff;
LATB = 0xff; //note: this still does not result in reading 0xFF from PORTB unless you set it to digital.
//However, reading from LATB shows it is indeed set.
}

/*Result:
 * PORTA 0x000000FF
 * PORTB 0x00000000
 * LATA  0x000000FF
 * LATB  0x000000FF
 
 Reading from PORTB still gives 0 but the latch says it is set. If running this 
 * code on the Explorer 16/32, I believe an LED connected to PORTB would 
 * light up. This will be tested later.
  */
