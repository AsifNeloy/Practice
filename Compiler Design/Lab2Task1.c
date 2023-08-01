#include<bits/stdc++.h>
using namespace std;

int main()
{
          string text = "ABCD";
          char use[text.length()];
          for(int i=0; i< sizeof(use);i++)
          {
                    use[i] = text[i];
          }
          int x=0;

                    for(int i = 0; i<sizeof(Input); i++)
                    {

                             if(use[i]<='a'||use[i]<='A' && use[i]>='z'||use[i]>='Z')
                             {
                                       x++;
                             }
                    }
                    if(x==sizeof(Input)){cout<<"Its is a constant";}
                    else{cout<<"Its not a constant";}


}
