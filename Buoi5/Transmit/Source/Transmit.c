/*
* File: Transmit.c
* Author: MA THANH VAN
* Date: 31/03/2023
* Description: This is a concatenate 2 strings and display
*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef union 
{
    struct{
        char uid[5];        //mang uid de luu ID vao 
        char data[9];       //mang data d luu data vao
    }frame;                     //member 1
    char data_frame[12];      
}frame_nfc;                       //member 2

frame_nfc nfc;

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

int main(int ardc, char const *argv[])
{
    printf("%s",  Transmit((char*)"1001", (char*)"10100110" ));
    return 0;
}
