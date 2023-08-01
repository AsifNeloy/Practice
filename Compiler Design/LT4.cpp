//for expression [A-Za-z0-9]
#include<bits/stdc++.h>
using namespace std;

int main(){

          cout<<"Enter expression : ";
          string in;
          cin>>in;
          cout<<endl;
          int i = 0;


                    for( i =0; i<in.length(); i++){
                              if((in[i]>='a' && in[i]<='z')  || ( in[i]>='A' && in[i]<='Z')  || ( in[i]>='0' && in[i]<='9') ){
                                        continue;
                              }

                              else{break;}
                    }


          if(i==in.length()){
                    cout<<"Valid Expression"<<endl;
          }
          else{cout<<"Invalid Expresson"<<endl;}

          return 0;
}


