#include <bits/stdc++.h>
using namespace std;
int comparison = -1;
void selectionSort(int arr[],int s){
          int i,j,temp;

          for(i=0;i<s;i++){
            for(j=i+1;j<s;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    }
            }
          }
          cout<<endl<<"Sorted array : ";
          for(i=0;i<s;i++){cout<<arr[i]<< " ";};cout<<endl;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
          comparison++;
        int mid = l + (r - l) / 2;//cout<<"\tmid : "<<mid<<endl;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

     return -1;
}

int main(void)
{
    int arr[] = { 92,82,21,16,18,95,25,10 };
    int valueToSearch = 92;
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    int result = binarySearch(arr, 0, n - 1, valueToSearch);
    cout<<endl;
    if(result == -1) { cout << "Element is not present in array";}
          else {cout <<valueToSearch<<" found at index "<< result<<" in the sorted array";}
          cout<<"\nNumber of comparison : "<<comparison<<endl;
    return 0;
}

