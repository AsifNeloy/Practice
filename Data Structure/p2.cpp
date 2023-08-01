#include<bits/stdc++.h>
using namespace std;
int main(){
          int Array_1[] = {1,4,6,3,6,9},Array_2[] = {5,3,7,1,2,6},ar3[5],j=0,l=0,flag=0;

          for(int i=0;i<6;i++){
                              int pk = Array_1[i];
                    for(j=0;j<6;j++){
                    if(Array_2[j]==pk){
                              flag++;
                              ar3[l]=pk;
                              l++;
                    }
                    }
          }
          if(flag>0){
                    for(j=0;j<5;j++){
                              cout<<ar3[j]<<" ";}
                    }
          else{
                    cout<<"No common element!"<<endl;

          }

          return 0;}

