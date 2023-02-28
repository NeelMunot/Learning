#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], string1[100];
    // printf("Enter a string : ");
    printf("Enter a string : ");
    //gets(string1);
    scanf("%s", &string);
    // puts(string);
    puts(string1);
    printf("Lenght : %i", strlen(string1));
}