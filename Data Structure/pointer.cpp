#include <iostream>

using namespace std;

int main()
{
    cout << "Show the pointer magic " << endl;
    int a=10,b=20,*p,*q;
    p=&a;
    q=&b;
    cout<<"Address of a is = "<<p<<endl;
    cout<<"Address of b is = "<<q<<endl;
    cout<<""<<endl;
    cout<<"What will happen if we use double pointer ???"<<endl;
    cout<<"Want to know?"<<endl;
    cout<<"Lets go!!!!!!"<<endl;
    cout<<""<<endl;



        int aa=10,*r,**z,***zz;
        r=&aa;
        z=&r;
        zz=&z;
        cout<<"*r= "<<r<<endl;
        cout<<"Address of p is(LOL) ="<<z<<endl;
        cout<<"Address of z is(LOL) ="<<zz<<endl;
        cout<<"Address of r is = "<<*z<<endl;
        cout<<"Value of aa was = "<<*r<<endl;
        cout<<"In here r is pointing towards value of aa, that's why it returns the value of aa "<<endl;
        cout<<"In here z is pointing towards address of r, that's why it returns the memory address of r "<<endl;

    return 0;
}
