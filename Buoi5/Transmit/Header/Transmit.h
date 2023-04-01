#ifndef __TRANSMIT_H
#define __TRANSMIT_H

#include <stdio.h>

typedef union 
{
    struct{
        char uid[5];        //mang uid de luu ID vao 
        char data[9];       //mang data d luu data vao
    }frame;                     //member 1
    char data_frame[12];      
}frame_nfc;                       //member 2

frame_nfc nfc;
char* Transmit(char* ID, char* DATA)

#endif

