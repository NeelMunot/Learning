#include <iostream>
using namespace std;

void func(int);
void func2(int);
int main() 
{
  int n1;
  //cout<<"Smaller or Greater than 9"<<endl;
  //cout<<"Enter a number : ";
  cin>>n1;
  func(n1);
  return 0;
}

void func (int x)
{
  //cout<<x<<endl;
  if (x>0 && x<9)
  {
    func2(x);
    //cout<<"Number is less than 9"<<endl;
  }
  else if (x==9)
  {
    cout<<"The number is 9 "<<endl;
  }
  else if (x>0)
  {
    cout<<"Greater than 9"<<endl;
  }
  else
  {
    cout<<"Number does not belong from 1 to 9 "<<endl;
  }
}
void func2 (int k2)
{
  switch (k2)
  {
  case 1:
    cout<<"one";
    break;
  case 2:
    cout<<"two";
    break;
  case 3:
    cout<<"three";
    break;
  case 4:
    cout<<"four";
    break;
  case 5:
    cout<<"five";
    break;
  case 6:
    cout<<"six";
    break;
  case 7:
    cout<<"seven";
    break;
  case 8:
    cout<<"eight";
    break;
  
  default:
    break;
  }
  
}