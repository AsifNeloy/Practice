#include<iostream>
using namespace std;

int main()
{
          int x1,x2,x3,x4,x5;
          cin>>x1>>x2>>x3>>x4>>x5;

          if(x1>x2 && x1>x3 && x1>x4 && x1>x5)
                    {cout<<"Greatest ="<<x1<<endl;}
          if(x2>x1 && x2>x3 && x2>x4 && x2>x5)
                    {cout<<"Greatest ="<<x2<<endl;}
          if(x3>x1 && x3>x2 && x3>x4 && x3>x5)
                    {cout<<"Greatest ="<<x3<<endl;}
          if(x4>x1 && x4>x2 && x4>x3 && x4>x5)
                    {cout<<"Greatest ="<<x4<<endl;}
          if(x5>x1 && x5>x2 && x5>x3 && x5>x4)
                    {cout<<"Greatest ="<<x5<<endl;}

          return 0;
}
