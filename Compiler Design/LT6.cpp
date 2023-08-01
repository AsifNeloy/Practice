//for expression a|b
#include<bits/stdc++.h>
using namespace std;

int main(){

          cout<<"Enter expression : ";
          string in;
          cin>>in;
          cout<<endl;

          if(in.length()>0){cout<<"Invalid Expresson"<<endl;}
          else if(in[0]=='a' || in[0]=='b'){
                    cout<<"Valid Expression"<<endl;
          }
          else{cout<<"Invalid Expresson"<<endl;}

          return 0;
}




