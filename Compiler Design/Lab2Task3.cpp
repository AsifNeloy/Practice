#include<bits/stdc++.h>
using namespace std;

int main()
{
          string text = "//comment out \n /*a big line comment*/";
          char str[10] = { '//', '-', '*', '/', '%', '=' };
          char use[text.length()];
          for(int i=0; i< sizeof(use);i++)
          {
                    use[i] = text[i];
          }
          int xstart=0,xend=0,yend=0,ystart=0;
          bool x1=false,y1=false;
           for(int i = 0; i<sizeof(use); i++)
                    {

                             if(use[i]=='/'&&use[i+1]=='/')
                             {
                                       x1=true;
                                       xstart=i;
                             }
                             if(x1==true && use[i]=='\n')
                             {
                                       xend = i;
                             }
                    }

          for(int i = xstart; i<=xend;i++){
                    cout<<"Comment line : "<<use[i];
          }cout<<endl;
          for(int i = 0; i<sizeof(use); i++)
                    {

                             if(use[i]=='/' && use[i+1]=='*')
                             {
                                       y1=true;
                                       ystart = i;
                             }
                             if(x1==true && use[i]=='*' && use[i]=='/')
                             {
                                       yend = i;
                             }
                    }

          for(int i =ystart;i<=yend;i++){
                    cout<<"Line comment : "<<use[i];
          }
          return 0;
}
