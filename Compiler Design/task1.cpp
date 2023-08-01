#include<bits/stdc++.h>
using namespace std;

int main(){
int x, counterX=0, counterY=0;
float y, result;


cout<<"Enter value of integer : ";
cin>>x;
cout<<endl<<"Enter value of float : ";
cin>>y;
for(int i=0;i<=x;i++){
          result = x*y; y--; counterX++;counterY++;
}

cout<<"Result : "<<result<<endl;

cout<<"Tokens used :"<<endl;
cout<<"Tokens of integer used = (x, value) = "<<counterX+1+counterX<<endl;
cout<<"Tokens of float used = (y, value) = "<<counterY+counterY<<endl;


return 0;
}
