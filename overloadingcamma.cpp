#include<iostream>
using namespace std;
class loc
{
	int longitude, latitude;
	public :
		loc( int lg, int lt){longitude=lg;latitude=lt;}
		loc( ){}
		void show(){
			cout<<longitude<<"  "<<latitude<<"\n";
		}
		loc operator+(const loc op2) const;
		loc operator,(loc op2);
};
loc loc :: operator+(const loc op2) const
{
	loc l3;
	l3.longitude=longitude + op2.longitude;
	l3.latitude=latitude + op2.latitude;
	return l3;
} 

loc loc :: operator,(loc op2)
{
	loc temp;
	cout<<"Overloading comma\n";
	temp.longitude = op2.longitude;
	temp.latitude = op2.latitude;
	cout<<op2.longitude<<"  "<<op2.latitude<<endl;
	return temp;
}

int main()
{
	int x,y;
	x = (y=3,y+1);
	cout<<"X="<<x<<endl;
	loc ob1(10,20),ob2(5,30),ob3(1,1);
	ob1.show();
	ob2.show();
	ob3.show();
	cout<<endl;
	ob1=(ob1,ob2+ob2,ob3);
	ob1.show();
	return 0;
}
