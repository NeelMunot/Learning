#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Inside Const of A";
    }
    ~A()
    {
        cout<<"Inside Dest of A";
    }
    
};

class B : public A
{
public:
    B()
    {
        cout<<"Inside Const of B";
    }
    ~B()
    {
        cout<<"Inside Dest of B";
    }
};

class C : public B
{
public:
    C()
    {
        cout<<"Inside Const of C";
    }
    ~C()
    {
        cout<<"Inside Dest of C";
    }
};
int main()
{
    A a;
    B b;
    C c;

}