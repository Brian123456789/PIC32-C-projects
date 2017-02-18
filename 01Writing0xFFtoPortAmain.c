/* 
 * File:   main.c
 * Author: brian
 *
 * Created on February 6, 2017, 6:32 AM
 */
#include <p32xxxx.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

main()
{
// configure all PORTA pins as output
TRISA = 0;//Whenever you use a port as output, you must do this. Ports are by default set as input. All MCU's are like this.
PORTA = 0xff;
}

The TRISA is a control command. Lucio Di Jasio* says about it in his book on Programming PIC32's: 
  
  There are only
three signals that eventually reach the I/O cell. They are the data output, the data input,
and the tristate control signals. The latter is essential to decide whether the pin is to be
used as an input or an output, which is often referred to as the direction of the pin.
From the datasheet, again, we can determine the default direction for each pin—that is, in
fact, configured as an input after each reset or power up event. This is a safety feature and
a standard for all PIC microcontrollers. The PIC32 makes no exception.
The TRISA special-function register allows us to change the direction of each individual
pin on PortA. The rule is simple to remember:
● Clear a bit to 0 for an Output pin.
● Set a bit to 1 for an Input pin.
  
*"Programming 32-bit
Microcontrollers in C"
Exploring the PIC32 by Lucio Di Jasio
