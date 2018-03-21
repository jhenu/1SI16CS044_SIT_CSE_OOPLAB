#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int iVal1,iVal2;
	iVal1=6;
	iVal2=8;
	cout<<"\nbefore swapping\n";
	cout<<iVal1<<"\t"<<iVal2<<endl;
	swap(iVal1,iVal2);
	cout<<"\nafter swapping\n";
	cout<<iVal1<<"\t"<<iVal2<<endl;
	return 0;
}
void swap(int &m,int &n){
	int f;
	f=m;m=n;n=f;
}
