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
/****************************** Init Position *********************************/
/******************************************************************************/
void init_arm() {


    PutAX(AX_BROADCAST, AX_TORQUE_LIMIT, 1023);
    __delay_ms(40);

    PutAX(AX_BROADCAST, AX_MOVING_SPEED, 20);


    PutAX(AX_BROADCAST, AX_GOAL_POSITION, 300);
    __delay_ms(100);


}

