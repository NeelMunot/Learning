#include<iostream>
using namespace std;

template<class T>
void getdata( T arr[],int n){
    cout<<"Enter any data into array (integer/float)\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
template<class T>
void sort(T arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                T temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"the sorted array is :-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}



int main(){
    int n;
    int arr[n];
    float ar[n];
    int dt;
    cout<<"Enter number of elements you want to include:-  ";
    cin>>n;
    cout<<"Enter the type of array you want to include:-\nfor integer (1)\n for float(2)\n\n";
    cin>>dt;
    switch (dt)
    {
    case 1:
        getdata(arr,n);
        sort(arr,n);
        break;
    case 2:
        
        getdata(ar,n);
        sort(ar,n);
        break;
    
    default:
        break;
    }
    return 0;
}
