#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter value :"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Number "<<i+1<<" : ";
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            for(int j=i+1;j<=n;j++){
                    arr[j-1]=arr[j];n--;
          }
        }
    }
    cout<<endl<<"The converted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
