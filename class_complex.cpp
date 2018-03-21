#include<iostream>
using namespace std;

class complexType{
	int iReal,iComp;
	public:
	
	void fnSetComplex(int,int);
	void fnDisplay();
	void fnAdd(complexType);
};


int main(){
	
	complexType c1,c2;
	c1.fnSetComplex(2,3);
	c2.fnSetComplex(3,2);
	cout<<"c1:";
	c1.fnDisplay();
	cout<<"c2:";
	c2.fnDisplay();
	cout<<"c1+c2=";
	c1.fnAdd(c2);
	return 0;
}

void complexType::fnSetComplex(int a,int b)
{
	iReal=a;
	iComp=b;
}
void complexType::fnDisplay()
{
	cout<<iReal<<"+i"<<iComp<<endl;
}
void complexType::fnAdd(complexType c2)
{
	cout<<iReal+c2.iReal<<"+i"<<iComp+c2.iComp<<endl;
}
