#include<iostream>
#include<iomanip>
using namespace std;

class durationType
{
	int ihr,imn,isc;
	public:
		durationType(){ihr=imn=isc=0;}
		durationType( int );
		durationType( int, int, int);
		durationType operator+(durationType&);
		void operator=(int);
		operator int();
		friend ostream& operator<<(ostream &out, durationType&);
		friend istream& operator>>(istream &in, durationType&);
};

ostream& operator<<(ostream &out, durationType &d)
{
	out<<setw(2)<<setfill('0')<<d.ihr<<":";
	out<<setw(2)<<setfill('0')<<d.imn<<":";
	out<<setw(2)<<setfill('0')<<d.isc<<"\n";
	return out;
}

istream& operator>>(istream &in, durationType& d)
{
	cout<<"enter duration: ";
	in>>d.ihr>>d.imn>>d.isc;
	return in;
}


durationType :: durationType(int s)
{
	ihr=s/3600;
	s=s%3600;
	imn=s/60;
	s=s%60;
	isc=s;
}

durationType :: durationType(int h, int m, int s)
{
	ihr=h;imn=m;isc=s;
}

durationType durationType :: operator+(durationType &d)
{
	durationType d2;
	d2.ihr=ihr+d.ihr;
	d2.imn=imn+d.imn;
	d2.isc=isc+d.isc;
	d2.imn+=d2.isc/60;
	d2.isc%=60;
	d2.ihr+=d2.imn/60;
	d2.imn%=60;
	d2.ihr%=12;
	
	return d2;	
}

void durationType::operator=(int s)
{
	ihr=s/3600;
	s=s%3600;
	imn=s/60;
	s=s%60;
	isc=s;
}

durationType :: operator int()
{
	return (ihr*3600+imn*60+isc);
}



int main()
{
	durationType d1,d3;
	durationType d2(20000);
	cout<<"d2="<<d2<<endl;	
	int timeinseconds;
	cin.get();
	d1=10000;
	cout<<"d1="<<d1<<endl;	
	cin.get();
	d3=d1+d2;
	timeinseconds= d3;
	cin.get();
	cout<<"duration 1="<<d1<<"\nduration 2="<<d2<<"\nduration 3="<<d3<<"\ntotal="<<timeinseconds<<endl;	
}
