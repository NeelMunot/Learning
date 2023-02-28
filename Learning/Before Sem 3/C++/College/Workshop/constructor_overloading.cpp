#include <iostream>
// #include <str
using namespace std;

class Movie
{
//explicitely
public:
string movieName;
double adultTicketPrice,childTicketPrice;

    Movie() //default
    {
        movieName = "";
        adultTicketPrice = 0;
        childTicketPrice = 0;
    }
    Movie(string movieName1, double adultTicketPrice1, double childTicketPrice1) //formal parameters - param
    {
        movieName = movieName1; // actual paramters
        adultTicketPrice =adultTicketPrice1;
        childTicketPrice =childTicketPrice1;
    }
    Movie(const Movie& obj1) //copy
    {
        // Movie m3(m1);
        // m3.printMovieName();
        cout<<"Copy constructor is called"<<endl;
        movieName = obj1.movieName;
        adultTicketPrice = obj1.adultTicketPrice;
        childTicketPrice = obj1.childTicketPrice;
    }
    ~Movie() //explicit - destructor
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    Movie m1, m2("Thor",200,100),m3(m2);

}