/*
* File: Transmit.c
* Author: MA THANH VAN
* Date: 31/03/2023
* Description: This is a concatenate 2 strings and display
*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "../Header/Transmit.h/"

/*
* Function: Transmit 
* Description: This function 
* Input:
*  ID       
*  DATA
* Output:
*   concatenate 2 strings 
*/
char* Transmit(char* ID, char* DATA)
{
    
    strcpy(nfc.frame.uid, ID);         // Truyền data vào uid
    strcpy(nfc.frame.data, DATA);       // Truyền data vào data 
    
    return strcat(nfc.frame.uid, nfc.frame.data);  ///strcat dung de noi hai chuoi
}

