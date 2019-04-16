/*
 * Print octal numbers
*/

#include <stdio.h>
#define MAX_OCTAL 64

int decimalToOctal(int dec);

int main()
{
    int i;

    for(i = 0; i < 65; ++i)
    {
        printf("[%d] (decimal) = [%d] (octal)\n", i, decimalToOctal(i));
    }


    return 0;
}


int decimalToOctal(int input_decimal)
{
    int dividend, rest, octal_result;
    dividend = input_decimal;
    octal_result = 0;

    while(dividend <= 8)
    {
        rest = dividend % 8;
        dividend /= 8;

        octal_result = (octal_result * 10) + rest;
    }
    
    return octal_result;
}
