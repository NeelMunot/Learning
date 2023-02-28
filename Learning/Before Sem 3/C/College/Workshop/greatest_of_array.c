#include <stdio.h>
void greatest_of_arr(int siz);
int main()
{
    int a1;
    printf("Enter length of array :");
    scanf("%i",&a1);
    greatest_of_arr(a1);
    
}
void greatest_of_arr(int siz)
{
    int arr[siz];
    for (int i = 0; i < siz; i++)
    {
        scanf("%i",&arr[i]);
    }
    int temp =0;
    for (int i = 0; i < siz; i++)
    {
        if (arr[i]>temp)
        {
            temp = arr[i];
        }
        // else
        // {
        //     break;
        // }
        
    }
    printf("The greatest element in the array is : %i",temp);
}