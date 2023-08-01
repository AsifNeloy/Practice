#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
                    cout<<"Enter value of arr["<<i+1<<"] ["<<j+1<<"] : ";
                    cin>>arr[i][j];
          }
    }
    for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
                    cout<<"Value of arr["<<i+1<<"] ["<<j+1<<"] : "<<arr[i][j]<<"  ";
                    if(j==2){cout<<endl;}

          }
    }



    return 0;}
