#include<iostream>
using namespace std;

int main(){
          int input[4][4],row=0, col=0;
          for( row=0;row<4;row++){
                    int i=1;
                    for(col=0;col<=row++;col++){
                              input[row][col]=i;
                              i++;
                    }
          }
          for( row=0;row<4;row++){
                    for( col=0;col<4;col++){
                              cout<<input[row][col]<<" ";
                    }cout<<endl;
          }

return 0;}
