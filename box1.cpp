#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class box
{
	protected:
		double length,width,height;
	public:
		box(double lv,double wv,double hv):length(lv),width(wv),height(hv){}
		box():length(0),width(0),height(0){}
		double volume() const
		{
			return length*width*height;
		}
		double getLength()const{return length;}
		double getWidth()const{return width;}
		double getHeight()const{return height;}
		friend ostream& operator<<(ostream& stream,const box& bo);
};

ostream& operator<<(ostream& stream,const box &bo)
{
	stream<<"Box("<<setw(2)<<bo.length<<","<<setw(2)<<bo.length<<")";
	return stream;
}

class carton:public box
{
	private:
		string material;
	public:
		carton(const string desc="cardboard"):material(desc){}
		carton(double x, double y,double z,const string desc="cardboard"):material(desc),box(x,y,z){}
		void showDetails()
		{
		cout<<"\nmaterial="<<material;
		cout<<"\nlength="<<getLength();
		cout<<"\nwidth="<<getWidth();
		cout<<"\nheight="<<getHeight();
		cout<<endl;
		}
		double carton_volume()
		{
			return length*width*height;
		}
};

int main()
{
	box bo(40.0,30.0,20.0);
	carton cart(10.0,20.0,30.0);
	carton candy(20.0,30.0,40.0,"thin cardboard");
	cout<<"box occupies "<<sizeof bo<<" bytes\n";
	cout<<"candy carton occupies"<<sizeof candy<<" bytes\n";
	cout<<"box volume is "<<bo.volume()<<"\n";
	cout<<"carton volume is "<<cart.carton_volume()<<endl;
	cout<<"candy carton volume is "<<candy.carton_volume()<<endl;
	cout<<"candy carton length is "<<candy.getLength()<<endl;
	cart.showDetails();
	candy.showDetails();
	return 0;
}
