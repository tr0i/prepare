/*
 * Print octal numbers
*/

#include <stdio.h>
#define MAX_OCTAL 64

int decimalToOctal(int dec);

int main()
{
    int i;

    for(i = 69; i < 71; ++i)
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


    //do
    //{
    //    rest = dividend % 8;
    //    printf("rest - [%d]\n", rest);
    //    dividend /= 8;
    //    printf("dividend - [%d]\n", dividend);

    //    octal_result = (octal_result * 10) + rest;

    //} while(dividend > 0);
    
    while(dividend)
    {
        rest = dividend % 8;
        printf("rest - [%d]\n", rest);
        dividend /= 8;
        printf("dividend - [%d]\n", dividend);

        octal_result = (octal_result * 10) + rest;
    }


    return octal_result;
}
