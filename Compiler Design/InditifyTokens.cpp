#include<bits/stdc++.h>
using namespace std;

bool keyword(char input[])
{
          const char keywords[33][10] = {"auto","break","case","char","const","continue","default",
          "do","double","else","enum","extern","float","for","goto",
          "if","int","long","register","return","short","signed",
          "sizeof","static","struct","switch","typedef","union",
          "unsigned","void","volatile","while","main"};

          bool flag = false;
          int i,j, counter = 0;
          for( i=0;i<33;i++)
          {
                    for(j=0; j<10;j++){
                              if(keyword[i][j]==input[j]){
                                        counter++;
                              }
                    }

          }
          if(counter == sizeof(input)){
                     flag = 1;
                    break;
          }
          else{cout<<"Wrong Keyword"<<endl;}
          return flag;
}



int main()
{
          char taker, input[], operators[] = "+-*/%=";
          ifstream read ("program.txt");
          int x = 0;

          while(!read.eof())
          {
                  taker = read.get();

                    for(int i=0; i<6; i++){
                              if(taker == operators[i]){
                                        cout<<taker<<" is a operator"<<endl;
                              }
                    }

                    if(isalnum(taker)){
                              input[x++] = taker;
                    }

                    else if((taker == ' ' || taker == '\n') && (x!=0) ){
                              input[x] = '\0';
                              x=0;

                              if(keyword(input)==true){
                                        cout<<input<<" is  a keyword"<<endl;
                              }
                              else{
                                        cout<<input<<" is a indentifier"<<endl;
                              }
                    }
          }

          read.close();
          return 0;
}
