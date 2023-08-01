#include<bits/stdc++.h>
using namespace std;
int main(){
          int r1=3,r2=7,r3=(r1+r2),ar1[r1],ar2[r2],ar3[r3],i=0,j=0;
          for(i=0;i<r1;i++){
                    cout<<"Input array1["<<i<<"] = ";
                    cin>>ar1[i];
          }
          for(i=0;i<r2;i++){
                    cout<<"Input array2["<<i<<"] = ";
                    cin>>ar2[i];
          }
          for(i=0;i<r1;i++){
                    ar3[i]=ar1[i];
          }
          for(int p=r1-1;p<r3;p++){
                    ar3[p]=ar2[j];
                    j++;
          }
          for(int i=0;i<r3;i++){
                    cout<<ar3[i]<<" ";
          }
          cout<<endl;
          for(i=0,j=r3-1;i<r3;i++,j--){

                              int temp;
                              temp=ar3[i];
                              ar3[i]=ar3[j];
                              ar3[j]=temp;

          }
          for(int i=0;i<r3;i++){
                    cout<<ar3[i]<<" ";
          }
          return 0;}

