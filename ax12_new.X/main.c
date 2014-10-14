/*
 * Template dsPIC33F
 * Compiler : Microchip xC16
 * �C : 33FJ64MC802
 * Juillet 2012
 *    ____________      _           _
 *   |___  /| ___ \    | |         | |
 *      / / | |_/ /___ | |__   ___ | |_
 *     / /  |    // _ \| '_ \ / _ \| __|
 *    / /   | |\ \ (_) | |_) | (_) | |_
 *   /_/    |_| \_\___/|____/ \___/'\__|
 *			      7robot.fr
 */

#include <p33Fxxxx.h>      /* Includes device header file                     */
#include <stdint.h>        /* Includes uint16_t definition                    */
#include <stdbool.h>       /* Includes true/false definition                  */
#include "header.h"        /* Function / Parameters                           */
#include <libpic30.h>
#include "ax12.h"
#include <uart.h>
#include <delay.h>
#include "actions_ax12.h"
/******************************************************************************/
/* Global Variable Declaration                                                */
/******************************************************************************/

/* i.e. uint16_t <variable_name>; */


/******************************************************************************/
/* Configuartion                                                              */
/******************************************************************************/

// Select Oscillator and switching.
_FOSCSEL(FNOSC_FRCPLL & IESO_OFF);
// Select clock.
_FOSC(POSCMD_NONE & OSCIOFNC_ON & IOL1WAY_OFF & FCKSM_CSDCMD);
// Watchdog Timer.
_FWDT(FWDTEN_OFF);
// Select debug channel.
_FICD(ICS_PGD1 & JTAGEN_OFF);


/******************************************************************************/
/*********************************Main Program*********************************/
/******************************************************************************/

int16_t main(void) {
    // Initialize IO ports and peripherals.
    ConfigureOscillator();
    InitApp();
    responseReadyAX = 0;


         PutAX(15, AX_CW_ANGLE_LIMIT, 0);
         PutAX(15, AX_CCW_ANGLE_LIMIT, 0);
         
    while (1) {

//PutAX(254, AX_LED, 6500);

 //PutAX(AX_BROADCAST, AX_ID, 15);


  PutAX(15, AX_MOVING_SPEED, 0b11111111111);




    __delay_ms(1000);

    }
}

