#include <stdio.h>
int sqaure_nos(int a);
int main()
{
    int n1=0,n2=0;
    scanf("%i",&n1);
    n2 = sqaure_nos(n1);
    printf("%i", n2);
    return 0;
}
int sqaure_nos(int a)
{
    int b = a*a;
    //printf("%i", b);
    return b;
}