#include <iostream>
#include <fstream>

using namespace std;

class student
{
public:
    int roll , marks;
    string name;
    void getdata()
    {
        cout<<"Enter Student Roll no : ";
        cin>>roll;
        cout<<"Enter Student Name :";
        cin>>name;
        cout<<"Enter Student Marks : ";
        cin>>marks;
    }   
    void displaydata()
    {
        cout<<"Name: "<<name<<'\n'<<"Roll No.: "<<roll<<'\n'<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    ofstream fout;
    ifstream fin;
    int n;
    string buff;
    cout<<"Enter Number of students : ";
    cin>>n;
    student s[n];
    fout.open("fin_data.txt",ios::out);
    for (int i = 0; i < n ; i++)
    {
        s[i].getdata();
        fout<<"Roll No : "<<s[i].roll<<"\nName : "<<s[i].name<<"\nMarks : "<<s[i].marks<<"\n\n";
    }
    fout.close();
    fin.open("fin_data.txt", ios :: in);
    fin.open("DATA",ios::in);

    cout<<'\n'<<"Displaying the Output:"<<endl;
    for(int i=0;i<n;i++)
    {
        fin.read((char *)&s[i], sizeof(s[i]));
        s[i].displaydata();
    }
    return 0;
}