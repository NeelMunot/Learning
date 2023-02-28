#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0 ;
    printf("Enter numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i",&arr[i]);
    }
    // printf("The numbers inside array are : \n");
    for (int i = 0; i < 10; i++)
    {
        sum  = sum + arr[i];
    }
    double avg = sum/10;
    printf("The sum of all elements in array is : %i",sum);
    printf("\nThe avg of all elements in array is : %lf",avg);
}