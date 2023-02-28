#include <stdio.h>
int main()
{
    int a = 0;
    printf("Enter number : ");
    scanf("%i",&a);

    if (a%3 == 0)
    {
        printf("The number is divisible by 3.");
    }
    else
    {
        printf("The number is not divisible by 3.");
    }
}