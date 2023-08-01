#include <bits/stdc++.h>
using namespace std;

int main()
{
          char input[50];
          while(input>"0"){
          cin>>input;
          if(strcmp(input,strrev(input))==0){cout<<"Case : Yes"<<endl;}
          else{cout<<"Case : No"<<endl;}
          }
          return 0;
}


