#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
          int swapped=0,comparison=0;
          for(int k=1;k<n-1;k++){
                    int flag=0;
                    for(int i=0;i<n-k-1;i++){
                                        comparison++;
                              if(a[i]>a[i+1]){
                                        int temp;
                                        temp=a[i];
                                        a[i]=a[i+1]; swapped++;
                                        a[i+1]=temp;
                                        flag=1;
                              }
                    }if(flag==0){break;};
          }
          cout<<"Bubble sorted :"<<endl;
          for(int j=0;j<n;j++){cout<<a[j]<<" ";}
          cout<<endl<<"Swapped : "<<swapped<<endl;
          cout<<"Compared : "<<comparison<<endl;
}

void selectionSort(int arr[],int s){
          int i,j,temp,comparison=0,swapped=0;

          for(i=0;i<s;i++){
            for(j=i+1;j<s;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    swapped++;
                    }//comparison++;
            }comparison++;
          }
          cout<<endl<<"Selection sort :"<<endl;
          for(i=0;i<s;i++){cout<<arr[i]<< " ";}
          cout<<endl<<"Swapped : "<<swapped<<endl;
          cout<<"Compared : "<<comparison<<endl;
}
void insertionSort(int arr[], int n)
{
          int i, key, j,comparison=0,swapped=0;
          for (i = 1; i < n; i++)
          {
          key = arr[i];
          j = i - 1;

          while (j >= 0 && arr[j] > key)
          {
                    arr[j+1] = arr[j];
                    j = j - 1;
                    swapped++; comparison++;
          }
          arr[j + 1] = key;
          comparison++;
          }
          cout<<endl<<"Insertion sort :"<<endl;
          for(i=0;i<n;i++){cout<<arr[i]<< " ";}
          cout<<endl<<"Swapped : "<<swapped<<endl;
          cout<<"Compared : "<<comparison<<endl;
}


int main(){
          int arr1[] = {100,90,80,70,60,50,40,30};
          int arr2[] = {100,90,80,70,60,50,40,30};
          int arr3[] = {100,90,80,70,60,50,40,30};
          int sizeOfArray1 = sizeof(arr1)/sizeof(arr1[0]);
          int sizeOfArray2 = sizeof(arr2)/sizeof(arr2[0]);
          int sizeOfArray3 = sizeof(arr3)/sizeof(arr3[0]);
          bubbleSort(arr1,sizeOfArray1);
          selectionSort(arr2,sizeOfArray2);
          insertionSort(arr3,sizeOfArray3);
          return 0;
}
