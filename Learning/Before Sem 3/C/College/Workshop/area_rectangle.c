#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter length and breadth of rectangle : ");
    scanf("%f %f",&a,&b);
    // printf("\nEnter breadth of rectangle : ");
    // scanf("%f",&b);
    float area = a * b;
    printf("\nArea of rectangle  : %f",area);
}