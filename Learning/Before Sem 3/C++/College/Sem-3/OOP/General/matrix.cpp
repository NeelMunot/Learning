#include <iostream>
using namespace std;

//int matrix_make(int , int);
//int print_matrix(int mat[int] [int]);
int main()
{
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    //matrix_make(r,c);


//int matrix_make(int row, int column)
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"Enter A["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
        
    }
//    print_matrix( arr[row][column]);

//int print_matrix(int mat[row][column])

    //int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        cout<<"\t[";
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<"]\n";
        
    }
}