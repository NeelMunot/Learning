#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class person
{
private:
    string name;
    string dob;
    long int telno;
    int age;
public:
    void getdata()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Date of Birth : ";
        cin>>dob;
        cout<<"Enter Telephone number : ";
        cin>>telno;
        cout<<"Enter age : ";
        cin>>age;
    }
    void displaydata (vector<person> V1)
    {
        for (int i = 0; i < V1.size(); i++)
        {
            cout<<"Name : "<<V1[i].name<<endl;
            cout<<"Age :"<<V1[i].age<<endl;
        }
        
    }
    bool operator == (person p)
    {
        if (telno == p.telno)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void search_data(vector <person> p)
    {
        person ptemp;
        cout<<"Enter telephone number to find : ";
        cin>>ptemp.telno;
        vector <person> :: iterator it1;
        it1 = find(p.begin(),p.end(),ptemp);
        if (it1 != p.end())
        {
            cout<<"Telephone number found."<<endl;
            cout<<it1->name<<endl;
        }
        else
        {
            cout<<"Telephone number not found."<<endl;
        }
        
    }
    bool operator < (person p)
    {
        return(age < p.age);
    }
    void sort_data(vector <person> &p)
    {
        sort(p.begin(),p.end());
    }
};

int main()
{
    char ans;
    vector<person> v1;
    person p1;
    do
    {
        p1.getdata();
        v1.push_back(p1);
        cout<<"Do you want to continue (y/n) : ";
        cin>>ans;
    } while (ans == 'y');
    p1.displaydata(v1);
    // p1.search_data(v1);
    p1.sort_data(v1);
    cout<<"Sorted vector : ";
    p1.displaydata(v1);
}