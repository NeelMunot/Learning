#include <stdio.h>
//#include <conio.h>
int main()
{
    int choice = 0;
    int n1,n2;
    printf("List : \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\nEnter Choice :");
    scanf("%i",&choice);

    printf("\nEnter Two Numbers : ");
    scanf("%i %i",&n1,&n2);

    switch (choice)
    {
    case 1:
        printf("Addition  = %i", n1+n2);
        break;
    case 2:
        printf("Addition  = %i", n1-n2);
        break;
    case 3:
        printf("Addition  = %i", n1*n2);
        break;
    case 4:
        printf("Addition  = %i", n1/n2);
        break;
    case 5:
        printf("Addition  = %i", n1%n2);
        break;
    
    default:
        printf("Invalid Option");
        break;
    }
}

