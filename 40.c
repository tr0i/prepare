#include <stdio.h>

int ConvertDecimalToOctal(int decimal);

int main()
{
    int decimalNumber, octalNumber;
    decimalNumber = 1;

    int i;
    for(i = 175; i < 176; ++i)
    {
        octalNumber = ConvertDecimalToOctal(i);
        printf("[%d] - [%d]\n", i, octalNumber);
    }

    return 0;
}


int ConvertDecimalToOctal(int decimal)
{
    int base = 1;
    int result = 0;

    while(decimal != 0)
    {
        result += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    return result;
}
