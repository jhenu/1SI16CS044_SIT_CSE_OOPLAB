#include<iostream>
#include<cmath>
using namespace std;
double fnDepositeAmount(double=500.0,int=10,double=8.0);
int main(){
	double dPrincipla,dAmount,dRate;
	
	
	int iyears;
	
	dAmount=fnDepositeAmount(1000,20,5.0);
	
	cout<<"\nAmount at the end of term is"<<dAmount<<endl;
	
	dAmount=fnDepositeAmount(1000,15);
	
	cout<<"\nAmount at the end of term is"<<dAmount<<endl;	

	dAmount=fnDepositeAmount(1000);
	
	cout<<"\nAmount at the end of term is"<<dAmount<<endl;	
	dAmount=fnDepositeAmount();
	
	cout<<"\nAmount at the end of term is"<<dAmount<<endl;	
	return 0;
	
	
}


double fnDepositeAmount(double dP,int iY,double dR)
{
	double dAm=dP;
	int iCount;
	for(iCount=1;iCount<=iY;iCount++)
		dAm=dAm*(1+dR/100);
	return dAm;
}


