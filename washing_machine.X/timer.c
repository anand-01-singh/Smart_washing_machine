/* 
 * File:   timer.c
 * Author: ANAND
 *
 * Created on 19 June, 2025, 2:26 AM
 */

#include <xc.h>
void init_timer2(void)
{
    T2CKPS0=1;
    T2CKPS1=1;
    PR2=250;
    TMR2IE=1;
    TMR2ON=0;
}
