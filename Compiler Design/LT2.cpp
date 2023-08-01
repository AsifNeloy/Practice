//for expression abc+
#include<bits/stdc++.h>
using namespace std;

int main(){

          cout<<"Enter expression : ";
          string in;
          cin>>in;
          cout<<endl;
          int i = 0;

          if(in[0]=='a' && in[1]=='b' && in[2]=='c'){
                    for( i =3; i<in.length(); i++){
                              if(in[i]=='c'){
                                        continue;
                              }
                              else if(in[i]==' '){
                                        continue;
                              }
                              else{break;}
                    }
          }

          if(i==in.length()){
                    cout<<"Valid Expression"<<endl;
          }
          else{cout<<"Invalid Expresson"<<endl;}

          return 0;
}
