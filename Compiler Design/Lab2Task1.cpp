#include<bits/stdc++.h>
using namespace std;

int main()
{
          string text = "1245";
          char use[text.length()];
          for(int i=0; i< sizeof(use);i++)
          {
                    use[i] = text[i];
          }
          int x=0;

                    for(int i = 0; i<sizeof(use); i++)
                    {

                             if(use[i]<=1  && use[i]>=9)
                             {
                                       x++;
                             }
                    }
                    if(x==sizeof(use)){cout<<"Its is a constant";}
                    else{cout<<"Its not a constant";}


}

