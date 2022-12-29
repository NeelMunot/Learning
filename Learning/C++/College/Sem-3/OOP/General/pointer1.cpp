// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    int *ptr, *c;
    
    a = 10;
    ptr = &a;
    b = *ptr;
    c = ptr;
    
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}