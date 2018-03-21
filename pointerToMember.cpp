#include<iostream>
using namespace std;
class pointer
{
	public: int a=12;
	void fnDisplay()
	{
		cout<<"a="<<a<<endl;
	}
};


int main()
{
	int pointer ::.*p1=&pointer.a;
	pointer p;
	p.fnDisplay();
	p.*p1=20;
	p.fnDisplay();
}
