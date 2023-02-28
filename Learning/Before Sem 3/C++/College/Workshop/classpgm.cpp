#include <iostream>
using namespace std;

class student
{
public:
    string name1;
    void printname()
    {
        cout<<"Student name is : "<<name1<<endl;
    }
};
int main()
{
    student obj1;
    student obj2;

    obj2.name1 = "Sidd";
    obj1.name1 = "Abhi";

    obj1.printname();
    obj2.printname();
}