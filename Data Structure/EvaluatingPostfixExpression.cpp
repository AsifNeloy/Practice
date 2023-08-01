#include<bits/stdc++.h>
using namespace std;

#define MAX 50
char char_array[MAX];
int sizo = -1;
class Stack{
public:
    int stk[MAX];
    int sizeofArray(string x);
    //int pop();
    int evaluate(string x);
    int calc(int left, char op, int right);
    };
int Stack::sizeofArray(string s){

        int n = s.length();
        char_array[n - 1];
        strcpy(char_array, s.c_str());
        sizo=n;
        char_array[n]=')';
        //evaluate();
        return n-1;

}
/*int Stack::pop()
{
    if (sizo < 0) {
       // cout << "Stack Underflow";
        return 0;
    }
    else {
        char x = char_array[sizo--];

    }
}*/
int Stack::calc(int left, char op, int right){
    if(op=='+'){return left+right;}
    if(op=='-'){return left-right;}
    if(op=='*'){return left*right;}
    if(op=='/'){return left/right;}
}
int Stack::evaluate(string s){
    int n = s.length();
    char_array[n - 1];
    strcpy(char_array, s.c_str());
    sizo=n;
    char_array[n]=')';
    int result = 0,j=0;
    for(int i=0;char_array[i]!=')';i++){
        if(char_array[i]>='1' && char_array[i]<='9'){

            stk[0]=(int)char_array[i];
            j++;
        }
        else if(char_array[i]=='+' || char_array[i]=='-' || char_array[i]=='*' || char_array[i]=='/' ){
            int opright = stk[j];
            //pop();
            //cout<<"\t j = "<<j<<endl;
            int opleft = stk[--j];
            //cout<<"\t j = "<<j<<endl;

            //cout<<"\t j = "<<j<<endl;
            //pop();
            result = calc(opleft,char_array[i],opright);
            stk[j]=result;
        }


    }
    //cout<<"\t j = "<<j<<endl;
    return stk[j];
}



int main(){
    string s = "";
    cout<<"Enter a postfix expression to evaluate : ";
    cin>>s;
    Stack obj;

    cout<<endl<<"Result of the postfix expression : "<<obj.evaluate(s)<<endl;


    return 0;}
