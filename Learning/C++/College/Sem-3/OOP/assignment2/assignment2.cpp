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
        try
        {
            cout<<"Enter Book Title : ";
            cin>>title;
            cout<<"Enter Book Price : ";
            cin>>price;
            if (price < 0)
            {
                throw price;
            }
        }
        catch(int price)
        {
            if(price < 0)
            {
                cout<<"Price of Book cannot be Negative "<<endl;
            }
        }        
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
    try
    {
        getdata_pub();
        cout<<"Enter Pages : ";
        cin>>page_count;
        if (page_count < 0)
        {
            throw page_count;
        }
    }
    catch (int pagecount)
    {
        cout<<"Number of Pages is Always Positive"<<endl;
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