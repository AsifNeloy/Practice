#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter number : ";
cin>>n;
while(n!=1){
          if(n%2!=0){n=3*n+1;
          cout<<"Result = "<<n<<endl;}
          else{n=n/2;
          cout<<"Result = "<<n<<endl;}
}
return 0;}
