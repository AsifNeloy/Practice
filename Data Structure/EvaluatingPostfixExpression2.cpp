#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack {
    int top;

public:
    int stk[MAX];

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int topElement();
    bool isEmpty();
    void show();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        stk[++top] = x;
        //cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = stk[top--];
        return x;
    }
}
int Stack::topElement()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = stk[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}
float scanNum(char ch) {
   int value;
   value = ch;
   return float(value-'0');
}
int isOperator(char ch) {
   if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
      return 1;
   return -1;
}
int isOperand(char ch) {
   if(ch >= '0' && ch <= '9')
      return 1;
   return -1;
}
float operation(int a, int b, char op) {

   if(op == '+')
      return b+a;
   else if(op == '-')
      return b-a;
   else if(op == '*')
      return b*a;
   else if(op == '/')
      return b/a;
   else if(op == '^')
      return pow(b,a);
   else
      return INT_MIN;
}
float postfixEval(string postfix) {
   int a, b;
   Stack stk;
   string::iterator it;
   for(it=postfix.begin(); it!=postfix.end(); it++) {

      if(isOperator(*it) != -1) {
         a = stk.topElement();
         stk.pop();
         b = stk.topElement();
         stk.pop();
         stk.push(operation(a, b, *it));
      }else if(isOperand(*it) > 0) {
         stk.push(scanNum(*it));
      }
   }
   return stk.topElement();
}
int main() {
   string post = "4 2 1 - / 0 *";
   cout << "The result is: "<<postfixEval(post);
   return 0;
}
