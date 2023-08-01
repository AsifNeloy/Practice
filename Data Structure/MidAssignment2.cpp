#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
          int swapped=0,compare=0;
          for(int k=1;k<n-1;k++){
                    int flag=0;
                    for(int i=0;i<n-k;i++){
                              if(a[i]>a[i+1]){
                                        int temp;
                                        temp=a[i];
                                        a[i]=a[i+1];
                                        a[i+1]=temp;
                                        flag=1;
                                        swapped++;
                              }
                    }compare++;if(flag==0){break;};
          }
          cout<<"Bubble sorted :"<<endl;
          for(int j=0;j<n;j++){cout<<a[j]<<" ";}
          cout<<endl<<"Swapped : "<<swapped<<endl;
          cout<<"Compared : "<<compare<<endl;
}
void selectionSort(int arr[],int s){
          int i,j,temp,compare=0,swapped=0;

          for(i=0;i<s;i++){
            for(j=i+1;j<s;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    swapped++;
                    }
            }compare++;
          }
          cout<<endl<<"Selection sort :"<<endl;
          for(i=0;i<s;i++){cout<<arr[i]<< " ";}
          cout<<endl<<"Swapped : "<<swapped<<endl;
          cout<<"Compared : "<<compare<<endl;
}
void insertionSort(int arr[], int n)
{
          int i, key, j,compare=0,swapped=0;
          for (i = 1; i < n; i++)
          {
          key = arr[i];
          j = i - 1;

          while (j >= 0 && arr[j] > key)
          {
                    arr[j+1] = arr[j];
                    j = j - 1;
                    swapped++;
          }
          arr[j + 1] = key;
          compare++;
          }
          cout<<endl<<"Insertion sort :"<<endl;
          for(i=0;i<n;i++){cout<<arr[i]<< " ";}
          cout<<endl<<"Swapped : "<<swapped<<endl;
          cout<<"Compared : "<<compare<<endl;
}


int main(){
          int arr[] = {20,30,40,50,60,70,80,90};
          int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
          bubbleSort(arr,sizeOfArray);
          selectionSort(arr,sizeOfArray);
          insertionSort(arr,sizeOfArray);
          return 0;
}

