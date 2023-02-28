#include <iostream>
using namespace std;

class A
{
private:
    int a1;
public:
    A()
    {
    cout<<"inside class A constructor ";
    }
    ~A()
    {
        cout<<"inside destructor of class A";
    }
};
class B
{
private:
    int b1;
public:
    B()
    {
    cout<<"inside class B constructor ";
    }
    ~B()
    {
        cout<<"inside destructor of class B";
    }
};
class C : public A, public B
{    
public:
    int c1;
    C()
    {
    cout<<"inside class A constructor ";
    }
    ~C()
    {
        cout<<"inside destructor of class A";
    }
};

int main()
{
    
}