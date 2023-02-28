#include <stdio.h>
int main()
{
    int a, b , c ;
    printf("Enter three numbers : ");
    scanf("%i %i %i ", &a,&b,&c);

    if (a>b && a>c)
    {
        printf("The greates of three numbers is : %i",a);
    }
    if (b>a && b>c)
    {
       printf("The greates of three numbers is : %i",b);
    }
    if (c>b && c>b)
    {
        printf("The greates of three numbers is : %i",c);
    }
}