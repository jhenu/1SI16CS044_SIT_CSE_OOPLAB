#include<iostream>
#include<cstring>
using namespace std;
class stringType
{
	char *name;
	int length;
	public:
		stringType();
		~stringType();
		stringType(const char*);
		void display();
		void join(stringType &a,stringType &b);
};

stringType :: stringType()
{
	length=0;
	name=new char[length+1];
}

stringType :: ~stringType()
{
	cout<<"\n String with content "<<name<<" deallocated\n";
	delete name;
}

stringType :: stringType(const char *s)
{
	length=strlen(s);
	name=new char[length+1];
	strcpy(name,s);
}

void stringType :: display()
{
	cout<<name<<"\n";
}

void stringType :: join(stringType &a, stringType &b)
{
	length=a.length+b.length;
	delete name;
	name=new char[length+1];
	strcat(name,a.name);
	strcat(name,b.name);
}


int main()
{
	char *first=(char *)"Richard";
	stringType name1(first),name2("mathew"),name3("stallman"),s1,s2;
	s1.join(name1,name2);
	s2.join(s1,name3);
	{
		stringType s5("somename");
		s5.display();
	}
	name1.display();
	name2.display();
	name3.display();
	cout<<"s1\n";
	s1.display();
	cout<<"s2\n";
	s2.display();
	return 0;
}






