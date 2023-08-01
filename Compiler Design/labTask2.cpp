#include<bits/stdc++.h>
using namespace std;

int main()
{
          int n, arr[100], sum=0, avg;
          //float avg;

          cout<<"Enter how many numbers you to write : ";
          cin>>n;

          for(int i=0;i<n;i++)
          {
                    cout<<"Enter number "<<i+1<<" : ";
                    cin>>arr[i];
          }

          for(int i=0;i<n;i++)
          {
                    sum = arr[i]+sum;
          }

          avg = sum/n;

          cout<<endl<<"Average of the numbers  : "<<avg<<endl;

          return 0;
}
