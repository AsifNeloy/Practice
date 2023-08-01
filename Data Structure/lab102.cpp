#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array_1[6]={22,44,51,32,33,6},flag=0,score=6,array_2[6]={1,22,33,4,55,6},array_3[12],i=0;
    for (i=0;i<score;i++)
    {
      int temp=array_1[i];
      for(int j=0; j<6;j++)
      {
          if(array_2[j]==temp)
          {
              array_3[flag++]=temp;
          }
      }
    }
          if (flag!=0)
          {
                        for(i=0;i<flag;i++)
                    {
                        cout<<array_3[i]<<" ";
                    }
          }
          else
          {cout<<"No common element Found";}

return 0;}
