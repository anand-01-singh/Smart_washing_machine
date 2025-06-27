/* 
 * File:   clcd.h
 * Author: ANAND
 *
 * Created on 19 June, 2025, 2:26 AM
 */

#ifndef CLCD_H
#define	CLCD_H

#define CLCD_DATA_PORT PORTD
#define CLCD_DATA_PORT_DRR TRISD
#define CLCD_RS RE2 
void clcd_write(unsigned char byte,unsigned char mode);
void clcd_putch(const char data,unsigned char addr);
void clcd_print(const char *str,unsigned char addr);
void init_clcd(void);
#define CLCD_EN RE1
#define CLCD_RS_DDR TRISE2
#define CLCD_EN_DDR TRISE1
#define EIGHT_BIT_MODE 0x33
#define _XTAL_FREQ 20000000
#define INST_MODE 0
#define DATA_MODE 1
#define HIGH 1
#define LOW 0
#define CLEAR_DISP_SCREEN 0x01
#define DISP_ON_AND_CURSOR_OFF 0x0C
#define LINE1(x) (0x80+x)
#define LINE2(x) (0xC0+x)
#define LINE3(x) (0x90+x)
#define LINE4(x) (0xD0+x)
#define BLOCK 0x2A
#endif	
