#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class RandomInt
{
	public:
		RandomInt(int, int);
		int operator()();
		int operator()(int nb);
		int operator()(int , int);
	private:
		int a,b;
};
RandomInt :: RandomInt(int ia, int ib):a(ia),b(ib)
{}
int RandomInt :: operator()()
{
	return a+rand()%(b-a+1);
} 

int RandomInt :: operator()(int nb)
{
	return a+rand()%(nb-a+1);
} 
int RandomInt :: operator()(int na,int nb)
{
	return na+rand()%(nb-na+1);
} 
int main()
{
	RandomInt r(3,7);
	srand(time(NULL));
	cout<<"random value below 7:"<<r(7)<<endl;
	
	cout<<"random value between 3 and 7:"<<r(7)<<endl;
	
	cout<<"random value between 23 and 30:"<<r(23,30)<<endl;
}
