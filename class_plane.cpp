#include<iostream>
#include<cmath>
using namespace std;

class planeType{
	int iX,iY;
	public:
		void setCoOrdinate(int a,int b);
		void displayCoOrdinate();
		float calcDist(planeType p2);
						
};

int main(){
	planeType p1,p2;
	int x,y;
	cout<<"Enter the co-ordinates of plane 1";
	cin>>x>>y;
	p1.setCoOrdinate(x,y);
	
	cout<<"Enter the co-ordinates of plane 2";
	cin>>x>>y;
	p2.setCoOrdinate(x,y);
	
	
	p1.displayCoOrdinate();
	p2.displayCoOrdinate();
	cout<<"Distance ="<<p1.calcDist(p2)<<endl;
	
	
	
	return 0;
}



void planeType::setCoOrdinate(int x,int y)
{
	iX=x;
	iY=y;
}
void planeType:: displayCoOrdinate()
{
	cout<<"("<<iX<<","<<iY<<")"<<endl;
}

float planeType::calcDist(planeType p2)
{
	return sqrt((iX-p2.iX)*(iX-p2.iX)+(iY-p2.iY)*(iY-p2.iY));
}
