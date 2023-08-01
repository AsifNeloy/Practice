#include<bits/stdc++.h>
using namespace std;
int main(){
          int n=7,array_1[n];
          for(int i=0;i<n;i++){
                    cout<<"Input array["<<i<<"] = ";
                    cin>>array_1[i];

          }
          for(int o=0;o<n;o++){
                    for(int p=o+1;p<n;p++){
                              if(array_1[o]==array_1[p]){
                                        n--;
                                        for(int k=o;k<n;k++){
                                                  array_1[k]=array_1[k+1];
                                        }
                              }
                    }
          }
          for(int u=0;u<n;u++){
                    cout<<array_1[u]<<" ";
          }
          return 0;}

