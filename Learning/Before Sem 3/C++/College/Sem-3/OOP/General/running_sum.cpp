#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++ )
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < 4; i++ )
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<arr[j];
            sum = sum + arr[j];
        }
        cout<<"\t"<<sum<<"\n";
    }
}