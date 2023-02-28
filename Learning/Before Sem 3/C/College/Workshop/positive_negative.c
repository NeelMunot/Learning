#include <stdio.h>
int main()
{
    int a = 0;
    printf("Enter number : ");
    scanf("%i",&a);

    if (a > 0)
    {
        printf("The number is positive.");
    }
    if (a < 0)
    {
        printf("The number is negative.");
    }
}
