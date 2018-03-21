#include<iostream>
#include<cmath>
using namespace std;
class LocationType{
	int iXcor,iYcor;
	public:
		void fnSetLocation();
		void fnShowLocation();
		double fnDistFromOrigin();
		double fnCalDist(LocationType);
};

void LocationType::fnSetLocation(){
	cout<<"\neNTER cOORDINATES\n";
	cin>>iXcor>>iYcor;
}

void LocationType::fnShowLocation()
{
	cout<<"\nx-coordinate:"<<iXcor<<endl<<"\nx-coordinate:"<<iYcor<<endl;
}	
double LocationType::fnDistFromOrigin()
{
return(sqrt((iXcor*iXcor)+(iYcor*iYcor)));
}

double LocationType::fnCalDist(LocationType l2)
{
	return(sqrt(((l2.iYcor-iYcor)*(l2.iYcor-iYcor))+((l2.iXcor-iXcor)*(l2.iXcor-iXcor))));
}
int main()
{
	LocationType l1,l2;
	double dist;
	l1.fnSetLocation();
	l2.fnSetLocation();
	dist=l1.fnDistFromOrigin();
	cout<<"distance from origin="<<dist;
	dist=l1.fnCalDist(l2);
	cout<<"distance="<<dist;
	return 0;	
}	
