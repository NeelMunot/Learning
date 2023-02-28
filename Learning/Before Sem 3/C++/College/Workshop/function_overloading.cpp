#include <iostream>
using namespace std;

void sum (int a , int b);
void sum (float a , float b);
void sum (int a , int b , int c);

int main()
{
    sum(10,5);
    sum(12.4f,4.8f);
    sum(10,5,9);

    return 0;
}

void sum (int a , int b , int c)
{
    cout<<"Sum of a,b and c :"<<(a+b+c)<<endl;
}
void sum (int a , int b )
{
    cout<<"Sum of a,b :"<<(a+b)<<endl;
}
void sum (float a , float b )
{
    cout<<"Sum of a and b float numbers is :"<<(a+b)<<endl;
}