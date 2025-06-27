/* 
 * File:   buzzer.c
 * Author: ANAND
 *
 * Created on 19 June, 2025, 2:25 AM
 */

#include <xc.h>
#include "main.h"
#include "buzzer.h"

void init_buzzer(void) {
    TRISC2 = 0;      // Set RC2 as output
    BUZZER = 0;      // Turn off buzzer initially
}

void buzzer_on(void) {
    BUZZER = 1;      // Turn buzzer ON
}

void buzzer_off(void) {
    BUZZER = 0;      // Turn buzzer OFF
}
