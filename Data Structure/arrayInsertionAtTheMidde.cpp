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
          cout<<"Enter a index you want to insert = ";
          int middleIndex;
          cin>>middleIndex;
          for(int j=lastIndexNo;j>=middleIndex;j--){
                    arr[j+1]=arr[j];
          }
          cout<<endl<<"Enter value to insert at ["<<middleIndex<<"] : ";
          cin>>arr[middleIndex];
          for(int i=0;i<5;i++){cout<<arr[i]<<" ";}
          return 0;}


