#include <bits/stdc++.h>
using namespace std;

void countingMoney(int given){
          int allMoney[] = {1000,500,200,100,50,20,10,5,2,1};
          int n = sizeof(allMoney)/sizeof(allMoney[0]), i=0;

          while(i<n){
                    i++;
                    if(allMoney[i]<=given){
                              cout<<"Need a note of : "<<allMoney[i]<<endl;
                              given -= allMoney[i];
                              i=0;
                    }

          }
}

int main(){
 int value;
 cout<<"Enter amount : ";
 cin>>value;
 countingMoney(value);

return 0;}
