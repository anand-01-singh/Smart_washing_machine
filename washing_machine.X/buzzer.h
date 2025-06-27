/* 
 * File:   buzzer.h
 * Author: ANAND
 *
 * Created on 19 June, 2025, 2:26 AM
 */

#ifndef BUZZER_H
#define BUZZER_H

#define _XTAL_FREQ 20000000

#define BUZZER PORTCbits.RC2
#define BUZZER_DIR TRISCbits.TRISC2

void init_buzzer(void);
void buzzer_on(void);
void buzzer_off(void);

#endif
