#include<iostream>
using namespace std;


class GrandFather
{
    public:
    void methodGFather()
    {
    cout<<"I am Grand Father"<<endl;
    }
};

class Father:public GrandFather
{
    public:
    void methodFather()
    {
    cout<<"I am Father"<<endl;
    }
};


class son:public Father

{ public:
    void methodSon()
    {
    cout<<"I am Son"<<endl;
    }
};


int main()
{
    son obj;
    obj.methodGFather(); obj.methodFather(); obj.methodSon();
}
