//for expression [^ab]
#include<bits/stdc++.h>
using namespace std;

int main(){

          cout<<"Enter expression : ";
          string in;
          cin>>in;
          cout<<endl;
          int i = 0;


                    for( i =0; i<in.length(); i++){
                              if( in[i]=='a' || in[i]=='b' ){
                                        break;
                              }

                              else{continue;}
                    }


          if(i==in.length()){
                    cout<<"Valid Expression"<<endl;
          }
          else{cout<<"Invalid Expresson"<<endl;}

          return 0;
}



