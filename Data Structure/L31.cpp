#include<bits/stdc++.h>
using namespace std;


int main(){
          int input[100][100],changed[100][100],row,col,i,j,a=0,b=0;
          cout<<"Enter row of matrix : ";
          cin>>row;
          cout<<"Enter column of matrix : ";
          cin>>col;
          for(i=0;i<row;i++){
                    for(j=0;j<col;j++){
                              cout<<"Enter input["<<i<<"]["<<j<<"]  value : ";
                              cin>>input[i][j];

                    }
          }
          for(i=0;i<row;i++){
                    for(j=0;j<col;j++){
                              cout<<input[i][j]<<" ";
                              if(j==col-1){cout<<endl;}
                    }
          }
          cout<<endl;
          for(i=0;i<row;i++){
                    for(j=0;j<col;j++){
                              changed[j][i]=input[i][j];
                    }
          }
          for(i=0;i<col;i++){
                    for(j=0;j<row;j++){
                              cout<<changed[i][j]<<" ";
                              if(j==row-1){cout<<endl;}
                    }
          }


return 0;}
