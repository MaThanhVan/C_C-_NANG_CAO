/*
* File: ConverStringtoDec.c
* Author: MA THANH VAN
* Date: 31/03/2023
* Description: This is a ConverStringtoDec file for conver string to dec
*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*
* Function: converStringtoDec
* Description: This function cconver string to dec
* Input:
*  *arr  pointer ò type char
* Output:
*   
*/
void converStringtoDec(char* arr)
{
    int hexa[1000];
    for(int i=0; i < strlen(arr); i++)
    {
        hexa[i] = (int)arr[i];               // ép kiểu để thành mã thập phân
    }

    int temp[7];                            //biến tạm để phân biệt mỗi kỹ tự ASCII đổi sang nhị phân chỉ có 8bit
    for(int j = 0; j < strlen(arr); j++)
     {
        for(int i = 7; i >= 0; i--)         //  chuyển sang dạng nhị phân 8bit, đổi ngược thứ thự của chúng
        {  
            temp[i] = hex[j] % 2;               
            hex[j] = hex[j] / 2;  
        }
                                           
        printf("%c: = ",arr[j]); 
        for(int b = 0 ; b <= 7; b++)        // In các kí tự 
        {  
            printf("%d", temp[b]);          
            if(b == 7) printf("\n");        // nếu đến bit số 7 sẽ xuống dòng để không dính vào nhau
        } 
    }
}
