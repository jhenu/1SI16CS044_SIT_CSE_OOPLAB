#include<iostream>
using namespace std;
int top=-1;
char stack[100];

void push( int data)
{
	stack[++top]=data;
}
char pop( )
{
	return stack[top--];
}

char peep( )
{
	return stack[top];
}


int main()
{
	string s;
	cout<<"enter a string:";
	cin>>s;
	int len=0;
	while( len<s.length())
	{
		if(top==-1)
		{
			push(s[len++]);
			continue;
		}
		if(peep()== '{' && s[len]=='}')
		{
				pop();
		}
		else
		if(peep()== '[' && s[len]==']')
		{
				pop();
		}

		else
		if(peep()== '(' && s[len]==')')
		{
				pop();
		}
		else
			push(s[len]);
		len++;
	}
	if(top==-1)
		cout<<"balanced";
	else
		cout<<"unbalanced";
	return 0;
}
