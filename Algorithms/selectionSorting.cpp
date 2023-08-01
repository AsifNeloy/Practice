#include<iostream>
using namespace std;
#define SIZE 5

void selectionSort(int arr[],int s){
          int i,j,temp,swapped=0,comparison=0;
          //
          for(i=0;i<s;i++){
            for(j=i+1;j<s-1;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];swapped++;
                    arr[j]=temp;
                    }comparison++;
            }
          }
          for(i=0;i<s;i++){cout<<arr[i]<< " ";}
          cout<<endl<<"Comparison : "<<comparison<<endl;
          cout<<endl<<"Swapped : "<<swapped<<endl;
}
int main(){
          int arr[] = {32,12,67,30,22,88,44,25};
          //int arr[] = {2,1,3,4,5};
          int n = sizeof(arr)/sizeof(arr[0]);
          selectionSort(arr,n);
                    return 0;
        }



