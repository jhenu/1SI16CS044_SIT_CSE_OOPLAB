#include<iostream>
using namespace std;
int count=0;
int fibo(int n,int a[]){
	count=count+1;
	if(n==0 || n==1)
		return n;
	if(a[n-1]==0)
		a[n-1]=fibo(n-1,a);
	if(a[n-2]==0)
		a[n-2]=fibo(n-2,a);
	return (a[n-1]+a[n-2]);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=0;
	cout<<fibo(n,a);
	cout<<"\ncount="<<count<<endl;
	return 0;
}



/*
#include<iostream>
using namespace std;
int count=0;
int fibo(int n){
	count=count+1;
	if(n==0 || n==1)
		return n;
	else{
	
	
	return (fibo(n-1)+fibo(n-2));
	}
}

int main()
{
	cout<<fibo(30);
	cout<<"\ncount="<<count<<endl;
	return 0;
}
*/







