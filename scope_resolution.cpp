#include<iostream>
using namespace std;
int m=10;
int main(){
	int m=20;
	{
		int k=m;
		m=30;
		cout<<"Inner block\n";
		cout<<"k="<<k<<"\nm="<<m<<"\n";
		cout<<"::m="<<::m<<"\n";
	}
	cout<<"Outer block\n";
	cout<<"\nm="<<m<<"\n";
	cout<<"::m="<<::m<<"\n";
	return 0;
}



