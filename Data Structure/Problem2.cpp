#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"entered array is:"<<endl;
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }
    for(int j=0;j<n;j++)
    {
      if(arr[j]%2==0)
        {
        cout<<" "<<arr[j];
        }
    }

    return 0;
}
