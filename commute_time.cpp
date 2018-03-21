#include<iostream>
using namespace std;
void fnCommuteTime(double=40,double=25);
int  main(){
	fnCommuteTime();
	fnCommuteTime(70);
	fnCommuteTime(30,20);
		
}
void fnCommuteTime(double v,double d)
{
	cout<<"Commute Time="<<d/v<<"hours"<<endl;
}
