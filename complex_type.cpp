#include<iostream>
using namespace std;
class ComplexType{
	int iRealp,iImagp;
	public:
		void fnSetComplex(int iv1,int iv2){ iRealp=iv1;iImagp=iv2; }
		void fnDispComplex(){ cout<<iRealp<<"+i"<<iImagp<<endl; }
		void fnAddComplex(ComplexType c2)
		{
			ComplexType sum;
			sum.iRealp=iRealp+c2.iRealp;
			sum.iImagp=iImagp+c2.iImagp;
			cout<<"The sum is:";
			sum.fnDispComplex();
		}
};






int main()
{
	int iRp,iIp;
	ComplexType c1,c2,c3;
	cout<<"Enter the real and imaginary pf first number:";
	cin>>iRp>>iIp;
	c1.fnSetComplex(iRp,iIp);
	cout<<"second number:";
	cin>>iRp>>iIp;
	c2.fnSetComplex(iRp,iIp);
	c1.fnAddComplex(c2);
	return 0;
}	



