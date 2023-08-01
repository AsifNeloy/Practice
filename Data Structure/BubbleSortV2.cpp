#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n){
          int swapped=0,comparison=0,pass=0;
          for(int k=1;k<n-1;k++){
                              int flag=0;
                              pass++;
                    for(int i=0;i<n-k;i++){
                              if(a[i]>a[i+1]){
                                        int temp;
                                        temp=a[i];
                                        a[i]=a[i+1];swapped++;
                                        a[i+1]=temp;
                                        flag=1;
                                        }comparison++;
                              }if(flag==0){break;};
          }
          cout<<"Sorted array with bubble sort :  ";
          for(int j=0;j<n;j++){cout<<a[j]<<" ";}
          cout<<endl<<endl<<"Number of exchanges : "<<swapped<<endl;
          cout<<endl<<"Number of comparison : "<<comparison<<endl;
          cout<<endl<<"Number of passes : "<<pass<<endl;
}

int main ()
{
          int arr[] = {92,82,21,16,18,95};

          int n = sizeof(arr)/sizeof(arr[0]);
          bubbleSort(arr,n);
          return 0;
}
