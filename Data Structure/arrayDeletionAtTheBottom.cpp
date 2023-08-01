#include<bits/stdc++.h>
using namespace std;
int main(){
          int arr[5]={1,2,3,4},lastIndexNo=-1;
          for(int i=0;i<5;i++){
                    cout<<arr[i]<<" ";
                    if(arr[i]==0){lastIndexNo=i-1;break;}
                    else{lastIndexNo=i;}
          }
          cout<<"Last Index : "<<lastIndexNo<<endl;
          cout<<"Enter a index you want to delete = ";
          int middleIndex;
          cin>>middleIndex;
          for(int j=middleIndex+1;j<=lastIndexNo;j++){
                    arr[j-1]=arr[j];
          }

          for(int i=0;i<5;i++){cout<<arr[i]<<" ";}
          return 0;}
