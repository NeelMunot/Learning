#include <iostream>
using namespace std;

class student
{
public:
    int rn;
    string name;
    student(/* args */);
    ~student();
    void displaydata()
    {
        cout<<"Student name : "<<name<<endl;
        cout<<"Student Roll no : "<<rn<<endl;
    }
};

student::student(/* args */)
{
    cout<<"Enter student name :";
    cin>>name;
    cout<<"Enter student roll no :";
    cin>>rn;
}

student::~student()
{
    cout<<"Inside Destructor";
}

int main()
{
    student s1;
    s1.displaydata();
}
