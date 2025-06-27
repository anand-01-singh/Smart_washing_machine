/* 
 * File:   digitalkeypad.c
 * Author: ANAND
 *
 * Created on 19 June, 2025, 2:26 AM
 */

#include<xc.h>
#include"digitalkeypad.h"
void init_digital_keypad()
{
KEYPAD_PORT_DRR=KEYPAD_PORT_DRR|ALL_RELEASED;
}
unsigned char read_digital_keypad(unsigned char mode)
{
    static unsigned int once=1;
    static unsigned char pre_key;
    static unsigned char longpress;
    if(mode==LEVEL_DETECTION)
        return (KEYPAD_PORT & INPUT_LINES);
    else
    {
       if(((KEYPAD_PORT & INPUT_LINES)!=ALL_RELEASED)&& once)
       {
           once=0;
           longpress=0;
           pre_key=KEYPAD_PORT & INPUT_LINES;
       }
       else if(!once && (pre_key==(KEYPAD_PORT & INPUT_LINES))&& longpress < 20)
       {
           longpress++;
       }
       else if(longpress == 20)
       {
           longpress++;
           return 0x80|pre_key;
       }
       else if((KEYPAD_PORT & INPUT_LINES)==ALL_RELEASED && !once)
       {
           once=1;
           if(longpress < 20)
           {
               return pre_key;
           }
       }
    }
    return ALL_RELEASED;
}
