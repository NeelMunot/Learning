#include <stdio.h>
int main()
{
    const pi = 3.14;
    float rad = 0;
    printf("Enter radius of circle : ");
    scanf("%f",&rad);
    float circumference = 2 * pi * rad ;
    printf("The circumference of circle : %f",circumference);
    float area = pi * rad * rad;
    printf("\nhe area of circle : %f",area);
}