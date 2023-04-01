#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "../Header/Sum.h"

/*
* Function: calculate_sum
* Description: This function calculates the sum of many integers
* Input:
*   many integers
* Output:
*   flag
*/
void calculate_sum(int sum, ...)
{
    int flag = 0;
    va_list ptr;    //khai bao varlist
    //flag=*ptr;
    va_start(ptr, sum);

    for(int i = 0; i < sum; i++)
    {
        if (ceil(flag) == floor(*ptr))
        {
            
            printf("i = %d\n", va_arg(ptr, int));
        }
        else{
            printf("i = %.2f\n", va_arg(ptr, double));
        }
        
    }
    va_end(ptr);
    return flag;
}
