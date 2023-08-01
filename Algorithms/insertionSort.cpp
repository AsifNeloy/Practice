#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n)
{
    int i, key, j,swapped=0,comparison=0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];swapped++;
            j = j - 1;comparison++;

        }comparison++;
        arr[j + 1] = key;

    }
    for (i = 0; i < n; i++)
        {cout << arr[i] << " ";}
        cout<<endl<<"Swapped : "<<swapped<<endl;
        cout<<endl<<"Comparison : "<<comparison<<endl;
}


void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = { 32,12,67,30,22,88,44,25 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    //printArray(arr, n);

    return 0;
}
