#include<iostream>
using namespace std;

class publication {
    string title;
    float price;
    public:
    void getdata(){
        try{
            cout<<"enter the title ";
            cin>>title;
            cout<<"Enter the price ";
            cin>>price;
            if(price<0){
                throw price;
            }

        }
        catch(int price){
            if(price<0){
                cout<<"price can't be negative\n";
            }
        }
    }
    void display(){
        cout<<"the title is:- "<<title<<endl;
        cout<<"the price is:- "<<price<<endl;
    }
};
class book:public publication{
    int pagecount;
    public:
    void getdata(){
        try{
            publication::getdata();
            cout<<"Enter pagecount of Book";
            cin>>pagecount;
            if(pagecount<0){
                throw pagecount;
            }
        }
        catch(int pagecount){

                cout<<"only interger digits are allowed \n";

        }

    }
    void display(){
        cout<<"\n\n-------------------------------------------------------------------------------------------\n\n";
        publication::display();
        cout<<"the pagecount of book is "<<pagecount<<endl<<endl;
    }

};
class tape:public publication{
    float time;
    public:
    void getdata(){
        publication::getdata();
        try{
            cout<<"Enter time of tape in minutes:- ";
            cin>>time;
            if(time<0){
                throw time;
            }
        }
        catch(float time){

            cout<<"only float values allows";

        }
    }
    void display(){
        cout<<"\n\n-------------------------------------------------------------------------------------------\n\n";
        publication::display();
        cout<<"the time of tape is "<<time<<endl<<endl;
    }
};
int main(){
    book b1;
    b1.getdata();
    b1.display();
    tape t1;
    t1.getdata();
    t1.display();
}