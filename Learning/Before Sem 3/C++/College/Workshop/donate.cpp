#include <iostream>
using namespace std;
int main()
{
    string movie_name;
    double adult_tp,child_tp;
    double noats,nocts;
    double perct_donate,gross,amt_dnted,netsale;

    cout<<"Enter movie-name";
    cin>>movie_name;
    cout<<"Enter price of adult tiket :";
    cin>>adult_tp;
    cout<<"Enter price of child tiket :";
    cin>>child_tp;
    cout<<"Enter number of adult tiket sold :";
    cin>>noats;
    cout<<"Enter number of child tiket sold :";
    cin>>nocts;
    cout<<"Enter number of Percentage to be donated :";
    cin>>perct_donate;

    netsale = (adult_tp * noats )+ (child_tp * nocts);
    amt_dnted = netsale * perct_donate / 100;
    gross = netsale - amt_dnted;

    cout<<"Amount donated = "<<amt_dnted;
    cout<<"\nAmount left after donation = "<<gross;

} 
