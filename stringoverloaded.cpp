#include<iostream>
#include<cstring>
using namespace std;

class STR
{
	char *p;
	int len;
	public:
		STR(){}
		STR(const char *str)
		{
			strcpy(p,str);
			len=strlen(p);
		}
		STR operator+(STR s2)
		{
			STR newstr;
			newstr.len=len+s2.len;
			newstr.p=strcat(this->p,s2->p);
			return newstr;
		}
		
		void showstring()
		{
			cout<<p<<endl;
		}
};

int main()
{
	STR s1("yes"),s2("no"),s3;
	s3=s1+s2;
	
	s1.showstring();
	s2.showstring();
	s3.showstring();
	return 0;
}
