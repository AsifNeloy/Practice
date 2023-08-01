#include<bits/stdc++.h>
using namespace std;

void pop(string main, int pos){

          for(int i=pos; i<main.length();i++){
                    if(i == main.length()-2){
                                        main[i] = NULL;
                                        }
                    else{
                                        main[i] = main[i+1];
                    }
          }

}

bool check_match(string main, string rfr){

          int temp = 0;
          for(int i = 0; i<main();i++){
                    if(main[0] == rfr[0]){
                              temp++;
                    }
          }

          if(temp==main.length()){
                    return true;
          }
          else return false;
}

string best_result(string t, string s){

          string tem = t;

          for(int i = 0;i<tem.length();i++){
                    if(tem[i]=='S'){
                              pop(tem,i);
                    }
          }

          if(check_match(tem,s)){ return tem;}

}



void cfg(string s){

          string rule1 = "0S1S";
          string rule2  = "1S0S";
          string rule3 = " ";

          string temp;
          int first = s[0];
          int last = s[s.length()-1];

          if(rule1[0]==s[0]){
                    temp = rule1;-
          }
          else if(rule2[0]==s[0]){
                    temp = rule2;-
          }
          else if(rule3[0]==s[0]){
                    temp = rule3;-
          }
          else{cout<<"String not valid for the rules"}

          best_result(temp, s);



          cout<<" First       "<<s[0]<<endl;
          cout<<" Last        "<<s[s.length()-1]<<endl;


}

int main(){
          string in;
          cout<<"Enter string : "<<endl<<"=       ";
          cin>>in;
          cfg(in);

return 0;}
