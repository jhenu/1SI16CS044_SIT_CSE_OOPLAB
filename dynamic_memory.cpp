#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
	int *ptr;
	int size,i;
	ptr=new int;
	*ptr=12;
	cout<<"Value in the dynamic memory allocated block is"<<*ptr<<"\n";
	delete ptr;
	cout<<"\nEnter array size"<<endl;
	cin>>size;
	srand(time(NULL));
	try
	{
		ptr=new int[size];
		for(i=0;i<size;i++)
			*(ptr+i)=rand()%100;
		cout<<"\nArray Contents"<<endl;
		for(i=0;i<size;i++)
			cout<<ptr[i]<<"\t";
		cout<<endl;
		delete []ptr;
	}catch(bad_alloc ba)
	{
		cout<<"Allocation error..";
		return 1;
	}
	return 1;
}
