#include<bits/stdc++.h>
using namespace std;
int main(){
          int arr[5]={1,2,3},lastIndexNo=-1;
          for(int i=0;i<5;i++){
                    cout<<arr[i]<<" ";
                    if(arr[i]==0){lastIndexNo=i-1;break;}
                    else{lastIndexNo=i;}
          }
          cout<<"Last Index : "<<lastIndexNo<<endl;
          for(int j=1;j<=lastIndexNo;j++){
                    arr[j-1]=arr[j];
          }
          //cout<<endl<<"Enter value to insert at the top : ";
          //cin>>arr[0];
          for(int i=0;i<lastIndexNo;i++){cout<<arr[i]<<" ";}
          return 0;}

