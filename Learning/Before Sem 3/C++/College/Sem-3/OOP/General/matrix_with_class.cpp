#include <iostream>
using namespace std;

class matrix_with_class
{
public:
int row = 0 , columun = 0;

public:
matrix_with_class()
{
    cout<<"Enter number of rows : ";
    cin>>row;
    cout<<"Enter number of columns : ";
    cin>>columun;
}
int matrix_make()
{
    int arr[row][columun];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columun; j++)
        {
            cout<<"Enter A["<<i+1<<"]["<<j+1<<"]";
            cin>>arr[i][j];
        }
        
    }
    return 0;
};
int matrix_print()
{
    int arr[row][columun];
    for (int i = 0; i < row; i++)
    {
        cout<<"\t[";
        for (int j = 0; j < columun; j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<"]\n";
        
    }
    return 0;
};  
};

int main()
{
    matrix_with_class m;
    m.matrix_make();
    m.matrix_print();
    return 0;
}
