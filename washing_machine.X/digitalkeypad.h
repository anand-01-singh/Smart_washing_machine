/* 
 * File:   digitalkeypad.h
 * Author: ANAND
 *
 * Created on 19 June, 2025, 2:26 AM
 */

#ifndef DIGITALKEYPAD_H
#define	DIGITALKEYPAD_H
#define ALL_RELEASED 0x3F
#define INPUT_LINES 0x3F
#define LEVEL 0
#define STATE 1
#define KEYPAD_PORT PORTB
#define LEVEL_DETECTION 0
#define KEYPAD_PORT_DRR TRISB
#define SW1 0x3E
#define SW2 0x3D
#define SW3 0x3B
#define SW4 0x37
#define SW5 0x2F
#define SW6 0x1F
#define LED1 RD0
#define LSW4 0xB7
#define LSW5 0xAF
unsigned char read_digital_keypad(unsigned char mode);
void init_digital_keypad(void);
#endif	
