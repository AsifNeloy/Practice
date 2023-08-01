#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int s){
          int i,j,temp,swapped=0,comparison=0;
          //
          for(i=0;i<s;i++){
            for(j=i+1;j<s-1;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j]; swapped++;
                    arr[j]=temp;
                    } comparison++;
            }
          }
          //for(i=0;i<s;i++){cout<<arr[i]<< " ";}
          //cout<<endl<<"Comparison : "<<comparison<<endl;
         // cout<<endl<<"Swapped : "<<swapped<<endl;
}

int main()
{
          int n, arr[100], mini,maxi;

          cout<<"Enter how many numbers you want to give : ";
          cin>>n;

          for(int i=0;i<n;i++)
          {
                    cout<<"Enter number "<<i+1<<" : ";
                    cin>>arr[i];
          }

          selectionSort(arr,n);

          mini = arr[0]; maxi = arr[n-1];

          cout<<"Minimum value : "<<mini<<endl<<"Maximum value : "<<maxi<<endl;

          return 0;
}
