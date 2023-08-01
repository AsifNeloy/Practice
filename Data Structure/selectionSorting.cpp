#include<iostream>
using namespace std;
#define SIZE 5
/*void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx,swapped=0,comparison=0;


    for (i = 0; i < n; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
        {
                  if (arr[j] < arr[min_idx])  {min_idx = j;swapped++;}
                  comparison++;
        }

        swap(&arr[min_idx], &arr[i]);
    }
    for(i=0;i<n;i++){cout<<arr[i]<< " ";}
          cout<<endl<<"Comparison : "<<comparison<<endl;
          cout<<endl<<"Swapped : "<<swapped<<endl;

}*/

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



