#include <stdio.h>
int main()
{
  int a = 0;
  scanf("%i",&a);

  int n1[a],n2[a],n3[a];
  for (int i=0;i<a;i++)
  {
    scanf("%i %i %i",&n1[i],&n2[i],&n3[i]);
  }
  for (int i=0;i<a;i++)
  {
    if (n1[i]<41 && n2[i]<41 && n3[i]<41)
    {
        printf("%i",n1[i]*n2[i]*n3[i]);
    }
    else
    {
        break;
    }
  } 
}