#include<bits/stdc++.h>
using namespace std;

int main()
{
          int arr[10],i=1,j=0,temp=0;

          if(arr[i]>arr[j])
                    {
                              temp  =arr[i];
                              arr[i]=arr[j];
                              arr[j]=temp;
                    }
                    cout<<arr[i]<<" "<<arr[j]<<endl;
          return 0;
}
