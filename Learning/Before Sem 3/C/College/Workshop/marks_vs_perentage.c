#include <stdio.h>
int main()
{
    int marks = 0;
    printf("Enter marks of students : ");
    scanf("%i",&marks);

    if (marks >= 75)
    {
        printf("The student has got A grade");
    }
    if (marks >= 60 && marks < 75)
    {
        printf("The student has got B grade");
    }
    if (marks >= 40 && marks < 60)
    {
        printf("The student has got C grade");
    }
    else
    {
        printf("You have failed idiot !! ");
    }
}