#include <iostream>
#include <fstream>
//Everytime program is run then the file is rewritten

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    char buff[100],buf2[20];

    fout.open("data",ios::out);

    fout<<"Writing";   //if endl or some other next line command is given then the curson will shift and 
    fout<<"First";
    fout<<"File";

    fout.close();

    fin.open("data");
    while (fin.eof())
    {
        fin>>buf2;
        cout<<buf2;
    }
    

}