#include <iostream>
using namespace std;
int main() 
{
    int a[5] = {1,2,3,4,5};
    int *ptr;

    ptr = &a[0];
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"address using &a[i] "<<&a[i]<<endl;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"address using ptr "<<ptr+i<<endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Value using ptr "<<ptr+i<<endl;
    }
}