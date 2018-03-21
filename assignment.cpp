#include<iostream>
using namespace std;


class STACK
{
	int top,stack[3];
	
	public:
		STACK(){top=-1;}
		STACK operator++( );
		STACK operator++( int dummy );
		STACK operator--( );
		STACK operator--( int dummy );
		friend ostream& operator<<(ostream&, const STACK&);
		
};

ostream& operator<<(ostream &out, const STACK &s)
{
	out<<"stack elements: top";
	for(int i=s.top;i>=0;i--)
	{
		out<<"->"<<s.stack[i];
	}
	out<<endl;
	return out;
}

STACK STACK:: operator++( )
{
	if(top==2)
	{
		cout<< "overflow";
		return *this;
	}
	cout<<"enter the data to be pushed:";
	cin>>stack[++top];
	cout<<"data is inserted sucessfully\n";
	return *this;
}
STACK STACK :: operator++( int dummy )
{	
	if(top==2)
	{
		cout<< "overflow\n";
		return *this;
	}
	cout<<"enter the data to be pushed:";
	cin>>stack[++top];
	cout<<"data is inserted sucessfully\n";
	return *this;
}


STACK STACK:: operator--( )
{
	if(top==-1)
		cout<<"underflow\n";
	else	
		cout<<"Poped element is : "<<stack[top--]<<"\n";
	return *this;
}
STACK STACK :: operator--( int dummy )
{
	if(top==-1)
		cout<<"underflow\n";
	else	
		cout<<"Poped element is : "<<stack[top--]<<"\n";
		return *this;
}

int main()
{
	STACK s;
	int ch;
	while(1)
	{
		cout<<"enter your choice: \n 1-PUSH 2-POP 3-display 4-exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1	:	s++;	break;
			
			case 2	:	s--;	break;
			
			case 3	:	cout << s;	break;
			
			case 4	:	return 0;
			
			default : cout<<"invalid choice\n";
		}
		
	}
}
