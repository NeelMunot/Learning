#include <iostream>
using namespace std;

class addition
{
    public:
    int n1,n2;
    void getdata()
    {
        cout<<"Enter two numbers : "<<endl;
        cin>>n1>>n2;
    }
    void display()
    {
        cout<<"The Sum of two numbers = "<<(n1+n2)<<endl;
    }
};
int main() 
{
    addition sum1;
    sum1.getdata();
    sum1.display();
    return 0;
}