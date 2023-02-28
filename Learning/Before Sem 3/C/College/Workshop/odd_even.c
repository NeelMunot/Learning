#include <stdio.h>
int main()
{
int a = 0;
printf("Enter number : ");
scanf("%i",&a);

if (a%2 == 0)
{
printf("The number is even.");
}
if (a % 2 == 1)
{
printf("The number is odd.");
}
}