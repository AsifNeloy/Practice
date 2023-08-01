//....1
//...2.
//..3..
//.4...
//5....

#include<bits/stdc++.h>
using namespace std;

int main(){
int i,j=4,number=0;
for(i=0;i<=24;i++){
          if(i==24){cout<<".";}
          else if(i==j){cout<<++number;j=j+4;}
          else{cout<<".";}
          if(i==19 || i==14 || i==9 || i==4 ){cout<<endl;}
}

return 0;
}
