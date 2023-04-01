#include "../Header/Transmit.h"
#include <stdio.h>

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
