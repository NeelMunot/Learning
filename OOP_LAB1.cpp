#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    
    public:
    int n;
    complex(){
        real=0;
        img =0;
        cout<<real<<"+"<<img<<"i\n";
    }

    complex operator +(complex c2){
        complex c3;
        c3.real=real+c2.real;
        c3.img =img+c2.img;
        cout<<"the addition of complex number is "<<c3.real<<"+"<<c3.img<<"i\n";
    }
    
    complex operator *(complex c2){
        complex c3;

        c3.real=(real*c2.real)+(img*c2.img);
        c3.img=(real*c2.img)+(img*c2.real);
        return c3;
    }
    
    friend void operator <<(ostream &ot,complex &c){
        cout<<"\n\nthe result is  ";
        ot<<c.real;
        if(c.img>0){
            ot<<"+";
        }
        else{
            ot<<"-";
        }
        ot<<c.img;
        ot<<"i\n";
    }
    friend void operator >> (istream &in,complex&c){
        cout<<"enter real part\n";
        in>>c.real;
        cout<<"enter imaginary part\n";
        in>>c.img;
    }
};
int main(){
    complex c1,c2,c3,n;
    int flag=0;
    do{
        cout<<"for addition press (1)\n";
        cout<<"for multiplication press (2)\n ";
        cout<<"enter your choice\n";
        cin>>n.n;
        switch(n.n){
            case 1:
                cin>>c1;
                cin>>c2;
                c3=c1+c2;
                cout<<c3;
                break;
            case 2:
                cin>>c1;
                cin>>c2;
                c3=c1*c2;
                cout<<c3;
                break;
        }
        cout<<"do you want to continue(1/0)";
        cin>>flag;
    }
    while(flag=true);
}

