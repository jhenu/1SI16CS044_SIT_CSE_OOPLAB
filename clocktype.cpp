#include<iostream>
using namespace std;

class ClockType{
	int iH,iM,iS;
	public :
		void fnSetTime(int,int,int);
		void fnRetTime(int&,int&,int&);
		void fnPrintTime()const;
		void fnIncSec();
		void fnIncMin();
		void fnIncHou();
		bool fnCompare(ClockType)const;
};

void ClockType::fnSetTime(int h,int m,int s)
{
	iH=h;iM=m;iS=s;
}

void ClockType::fnPrintTime()const{
	cout<<"Time is "<<iH<<":"<<iM<<":"<<iS<<endl;
}

void ClockType::fnRetTime(int &h,int &m,int &s)
{
	h=iH;m=iM;s=iS;
}

void ClockType::fnIncSec(){
	iS++;
	if(iS>59)
	{
		iS=0;
		fnIncMin();
	}
}
void ClockType::fnIncMin(){
	iM++;
	if(iM>59)
	{
		iM=0;
		fnIncHou();
	}
}

void ClockType::fnIncHou(){
	iH++;
	if(iH>23)
		iH=0;
}

bool ClockType:: fnCompare(ClockType c2)const
{
	return (iH==c2.iH && iM==c2.iM && iS==c2.iS);
}

int main(){
	ClockType mC,yC;
	int hours,minutes,seconds;
	mC.fnSetTime(5,4,23);
	cout<<"My clock:";
	mC.fnPrintTime();
	cout<<endl;
	yC.fnSetTime(3,22,44);
	cout<<"Your clock";
	yC.fnPrintTime();
	cout<<endl;
	if(mC.fnCompare(yC))
		cout<<"Both times are equal"<<endl;
	else	
		cout<<"not equal"<<endl;
	cout<<"Enter hours,minutes and seconds:";
	cin>>hours>>minutes>>seconds;
	cout<<endl;
	mC.fnSetTime(hours,minutes,seconds);
	cout<<"New My clock:";
	mC.fnPrintTime();
	cout<<endl;
	mC.fnIncSec();
	cout<<"After incrementing myclock by one second:";
	mC.fnPrintTime();
	cout<<endl;
	mC.fnRetTime(hours,minutes,seconds);
	cout<<"hours="<<hours<<"\tminutes="<<minutes<<"\tseconds="<<seconds<<endl;
	cout<<"Let us synchronize both clocks"<<endl;
	yC=mC;
	cout<<"my clock";
	mC.fnPrintTime();
	
	cout<<"your clock";
	yC.fnPrintTime();
	
	if(mC.fnCompare(yC))
		cout<<"equal";
	else
		cout<<"not equal";
	return 0;
}


