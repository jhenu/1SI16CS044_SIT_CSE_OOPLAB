#include<iostream>
#include<cstdlib>
#include<new>

using namespace std;

class loc 
{
	int longitude,latitude;
	public :
		loc(){}
		
		loc(int lg, int lt)
		{
			longitude = lg;
			latitude = lt;
		}
		
		void show()
		{
		cout<<longitude<<"   "<<latitude<<endl;
		}
		
		void* operator new (size_t size, int &count);
		void operator delete(void *p);
};

void *loc :: operator new(size_t size, int &count)
{
	void *p;
	cout<<"overloadedd new"<<endl;
	p=malloc(size);
	if(!p)
	{
		bad_alloc ba;	
		throw ba;
	}
	count++;
	cout<<"overloaded new called "<<count<<" times"<<endl;
	return p;
	
}

void loc :: operator delete(void *p)
{
	cout<<"overloaded delete"<<endl;
	free(p);
}

int main()
{
	loc *p1,*p2;
	float *f;
	int icount=0;
	
	cout<<"\ncase1:\n";
	try{
		p1= new(icount)loc(10,20);
	}
	catch(bad_alloc xa)
	{
		cout<<"allocation error for p1\n";
		return 1;
	}
	
	
	cout<<"\ncase2:\n";
	try{
		p2= new(icount)loc(10,20);
	}
	catch(bad_alloc xa)
	{
		cout<<"allocation error for p2\n";
		return 1;
	}
	
	
	cout<<"\ncase3:\n";
	try{
		f=new float;
	}
	catch(bad_alloc xa)
	{
		cout<<"allocation error for f\n";
		return 1;
	}
	
	*f=10.10f;
	cout<<*f<<"\n\n";
	p1->show();
	p2->show();
	delete p1;
	delete p2;
	delete f;
	
	
	return 0;
	
}
