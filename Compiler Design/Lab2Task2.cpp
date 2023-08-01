#include<bits/stdc++.h>
using namespace std;

int main()
{
          string text = "5+2-3=4";
          char str[10] = { '+', '-', '*', '/', '%', '=' };
          char use[text.length()];

          for(int i=0; i< sizeof(use);i++)
          {
                    use[i] = text[i];
          }
          int no=1;
          for(int i=0; i<sizeof(use); i++)
          {
                    for(int j = 0; j<sizeof(use); j++)
                    {
                              if(use[i]==str[j])
                              {

                                        cout<<"Operator "<<no<<" : "<<str[j]<<endl;
                              }
                    }
          }


          return 0;
}

