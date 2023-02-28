#include <iostream>
using namespace std;

int main()
{
    int nos = 0,loc = -1,rn = 0;
    cout<<"Enter number of students : ";
    cin>>nos;
    cout<<"Enter student maks : ";
    int arr[nos+1];
    for (int i = 0 ; i < nos ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter roll number : ";
    cin>>rn;
    arr [nos + 1] = rn;
    cout<<"Linear Search"<<endl;
    for (int i = 0 ; i < nos ; i++)
    {
        if (arr[i] == rn)
        {
            cout<<"Student attended the training program."<<endl;
            loc = i ;
        }
    }
    if (loc == -1)
    {
        cout<<"Student did not attend training program."<<endl;
    }


    cout<<"Sentinel Search"<<endl;
    for (int i = 0 ; i < nos ; i++)
    {
        if ((arr[i] == rn) && (i != nos -1))
        {
            cout<<"Student attended the training program."<<endl;
            loc = i ;
        }
    }
    if (loc == -1)
    {
        cout<<"Student did not attend training program."<<endl;
    }

}