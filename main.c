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

