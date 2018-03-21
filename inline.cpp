#include<iostream>
#include<cmath>
using namespace std;

inline float fnCircumference( float );
inline float fnCalcArea( float );


int main(){
	
	float read;
	cout<<"\nEnter the radius of the circle:"<<endl;
	cin>>read;
	cout<<"\nThe circumference of the circle is"<<fnCircumference(read)<<endl;
	cout<<"\nThe area of the circle is"<<fnCalcArea(read)<<endl;	
	return 0;
}

inline float fnCircumference(float radius)
{
	return 2*M_PI*radius;
}

inline float fnCalcArea(float radius)
{
	return M_PI*radius*radius;
}
