#include <stdio.h>
#include <iostream>

using namespace std;

void update(int *a,int *b)
{
    cout<<*a + *b<<endl;
    if ((*a-*b) > 0)
    {
        cout<<(*a-*b);
    }
    else
    {
        cout<<(*b-*a);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    //1printf("%d\n%d", a, b);

    return 0;
}