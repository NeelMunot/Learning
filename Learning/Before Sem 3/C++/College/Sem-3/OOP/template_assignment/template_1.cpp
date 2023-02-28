#include <iostream>

using namespace std;

//template <class T>
/*
int get_array(int n){
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    return arr;
}
*/
template <class T>
void display(T arr,int n){
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}
template <class T>
void swap(T *xp, T *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

template <class T>
void SelectionSort(T arr[], int n)
{
    int min_idx;

    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{
    
    int a[5]= {8,5,3,9,4};
    //n = sizeof(a)/sizeof(int);
    SelectionSort(a,5);

    float b[5] = {2.3, 3.5, 1.2, 0.4,0.0};

    SelectionSort(b,5);

    display(a,5);
    display(b,5);

    return 0;
}
