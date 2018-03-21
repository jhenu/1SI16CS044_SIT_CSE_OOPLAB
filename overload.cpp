#include<iostream>
using namespace std;
void fnCalcArea(int);
void fnCalcArea(int,int);
void fnCalcArea(int,int,int);
int main(){
	fnCalcArea(2);
	fnCalcArea(3,4);
	fnCalcArea(2,3,4);
}
void fnCalcArea(int radius){
	const double PI=3.14168;
	cout<<"Area of circle is="<<PI*radius*radius<<endl;
}
void fnCalcArea(int length,int breadth){
	cout<<"Area of rectangle="<<length*breadth<<endl;
}
void fnCalcArea(int base,int h1,int h2){
	cout<<"Area of trapesium is "<<0.5*base*(h1+h2)<<endl;
}

