#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length,width;
    
public:
    void display()
    {
        // cout<<"Length : "<<length;
        // cout<<"Width : "<<width;
        cout<<length<<" "<<width<<endl;
    }
};

class RectangleArea : public Rectangle
{
    public:
    void read_input()
    {
        cin>>length>>width;
    }
    void display()
    {
        cout<<length*width<<endl;
    }


};
int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    
    return 0;
}