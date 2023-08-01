#include<bits/stdc++.h>
using namespace std;
int main(){
          int array_1[10] = {8,4,6,1,6,9,6,1,9,8},limit,con=0;

          for(int i=0;i<10;i++){
                    con=-1;

                    limit=array_1[i];
                    for(int i=0;i<10;i++){
                    if(limit==array_1[i++]){
                              con++;
                    }}
                    cout<<limit<<" occurs = "<<con<<" times"<<endl;

          }


          return 0;}


