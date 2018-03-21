#include<iostream>
using namespace std;

int& fnMaximum(int&, int&);

int main(){
	
	int ival1,ival2;
	cout<<"\nenter two positive values"<<endl;
	cin>>ival1>>ival2;
	
	cout<<"\n values are: ival1="<<ival1<<"ival2="<<ival2<<endl;
	
	fnMaximum(ival1,ival2)=0;
	
	cout<<"\n values are: ival1="<<ival1<<"ival2="<<ival2<<endl;
	
	return 0;
}


int& fnMaximum(int &a, int &b)
{
	if(a>b)
		return a;
	else
		return b;
}
