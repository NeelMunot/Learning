#include <iostream>
using namespace std;

class publication
{
    protected:
    string title;
    float price;
    public:
    void getdata_pub()
    {
        cout<<"Enter Book Title : ";
        cin>>title;
        cout<<"Enter Book Price : ";
        cin>>price;
    }

    void displaydata_pub()
    {
        cout<<"The title of the book is : "<<title;
        cout<<"\nThe price of the book is : "<<price;
    }

};

class book : protected publication
{
    public:
    int page_count;

    public:
    void getdata_book()
    {
        getdata_pub();
        cout<<"Enter Pages : ";
        cin>>page_count;
    }

    void displaydata_book()
    {
        displaydata_pub();
        cout<<"\nThe number of pages in the book is : "<<page_count;
    }
};

class tape : protected publication
{
    public:
    int time_length;

    public:
    void getdata_tape()
    {
        cout<<"Enter time length of audio in minutes : ";
        cin>>time_length;
    }

    void displaydata_tape()
    {
        cout<<"\nThe time length of audio file in minutes is  : "<<time_length;
    }
};

int main()
{
    book b1;
    b1.getdata_book();
    tape t1;
    t1.getdata_tape();

    b1.displaydata_book();
    t1.displaydata_tape();

    return 0;
}