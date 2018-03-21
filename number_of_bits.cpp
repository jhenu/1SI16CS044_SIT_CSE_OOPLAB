#include<iostream>
using namespace std;
int main(){
	int n,i=0;
	cin>>n;
	while(n>0)
	{	
		i++;
		n=n&(n>>1);
	}
	cout<<endl<<i<<endl;
	return 0;
}
