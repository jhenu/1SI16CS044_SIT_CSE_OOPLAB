#include<iostream>
using namespace std;
void fnSumDiff(int,int,int&,int&);
int main(){
	int x,y;
	int sum=0,diff=0;
	cout<<"enter two numbers:";
	cin>>x>>y;
	fnSumDiff(x,y,sum,diff);
	cout<<"sum="<<sum<<"\tdiff="<<diff;
	return 0;
}
void fnSumDiff(int v1,int v2,int &sum,int &diff)
{
	sum=v1+v2;
	diff=v1-v2;
}
