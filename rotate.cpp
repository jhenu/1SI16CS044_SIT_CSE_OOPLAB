#include<iostream>
using namespace std;
void fnRotate(int&,int&);
void fnRotate(int&,int&,int&);
void fnRotate(int&,int&,int&,int&);
void fnRotate(double&,double&,double&);
int main()
{
	int a=1,b=2,c=3,d=4;
	double x=1.1,y=1.2,z=1.3;
	cout<<"Rotate 2\n";
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
	fnRotate(a,b);
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
	a=1;b=2;c=3;d=4;	
	cout<<"Rotate 3\n";
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
	fnRotate(a,b,c);	
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
	
	a=1;b=2;c=3;d=4;	
	cout<<"Rotate 4\n";
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
	cout<<"d="<<d<<"\n";
	fnRotate(a,b,c,d);	
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
	cout<<"d="<<d<<"\n";	
	
	cout<<"Rotate Double\n";
	
	cout<<"x="<<x<<"\n";
	cout<<"y="<<y<<"\n";
	cout<<"z="<<z<<"\n";
	fnRotate(x,y,z);	
	cout<<"x="<<x<<"\n";
	cout<<"y="<<y<<"\n";
	cout<<"z="<<z<<"\n";
	
	return 0;
}


void fnRotate(int &p,int &q)
{
	int t;
	t=p;p=q;q=t;
}

void fnRotate(int &p,int &q,int &r)
{
	int t;
	t=p;p=q;q=r;r=t;
}

void fnRotate(int &p,int &q,int &r,int &s)
{
	int t;
	t=p;p=q;q=r;r=s;s=t;
}

void fnRotate(double &p,double &q,double &r)
{
	double t;
	t=p;p=q;q=r;r=t;
}
