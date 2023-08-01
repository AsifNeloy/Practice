#include<bits/stdc++.h>
using namespace std;


int top = -1;
char stacks[100];


void push(char a)
{
	stacks[top] = a;
	top++;
}

void pop()
{
	if (top == -1)
	{
		cout<<"expression is invalid"<<endl;
		exit(0);
	}
	else
	{
		top--;
	}
}

void find_top()
{
	if (top == -1){
                    cout<<endl<<"Expression is valid"<<endl;
	}

	else{
                   cout<<endl<<"Expression is invalid"<<endl;
	}

}

int main()
{
	int i;
	char a[100];

	cout<<"Enter expression : ";

	cin>>a;
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
			push(a[i]);
		}
		else if (a[i] == ')')
		{
			pop();
		}
	}
	find_top();
	return 0;
}



