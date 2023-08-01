#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2, num3,i,j;

    cout<<"select elements of array_1 = ";
    cin>>num1;
    int array_1[num1];
    for(i=0; i<num1; i++)
    {     cout<<"array_1]"<<i<<"] = ";
          cin>>array_1[i];
    }
    cout<<"select elements of array_2 = ";
    cin>>num2;
    int array_2[num2];
    for(i=0; i<num2; i++)
    {
          cout<<"array_2]"<<i<<"] = ";
          cin>>array_2[i];
    }
    num3 = num1 + num2;
    int array_3[num3];
    for(i=0; i<num1; i++)
    {
        array_3[i] = array_1[i];
    }
    for(i=0, j=num1; j<num3 && i<num2; i++, j++)
    {
        array_3[j] = array_2[i];
    }
    for(i=num3-1; i>=0; i--)
    {
        cout<<array_3[i]<<" ";
    }
    return 0;
}
