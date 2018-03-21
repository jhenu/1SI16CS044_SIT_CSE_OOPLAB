#include<iostream>
using namespace std;
class celestialbody
{
	protected:
		double size;
	public:
		celestialbody(double);
};
class planet:public celestialbody
{
	protected:
		double orbittime;
	public:
		planet(double,double);
};
class earth:public planet
{
	private:
		unsigned long int population;
	public:
		earth();
};
celestialbody::celestialbody(double s)
{
cout<<"celestial body constructor called"<<endl;
}
planet ::planet (double ot,double sv):celestialbody(sv),orbittime(ot)
{
cout<<"planet constructor called"<<endl;
}

earth :: earth():planet(1,40000),population(30000000000)
{
	cout<<"earth constructor called: "<<endl;
	cout<<"population="<<population<<endl;
	cout<<"orbit time="<<orbittime<<endl;
	cout<<"size="<<size<<endl;
}

int main()
{
	earth e;
		return 0;
}
