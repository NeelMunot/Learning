#include <stdio.h>
int main()
{
    int a = 10;
    int b = 6;

    printf("Addition = %i",(a+b));
    printf("\nSubtraction = %i",(a-b));
    printf("\nMultipliation = %i",(a*b));
    printf("\nDivision = %i",(a/b));

    printf("\nModulus = %i",(a%b));
    printf("\nIncrement1 = %i",(a++));
    printf("\nIncrement2 = %i",(++a));
    printf("\nDecrement = %i",(--a));
}