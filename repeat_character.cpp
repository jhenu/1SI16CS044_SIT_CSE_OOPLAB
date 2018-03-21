#include<iostream>
using namespace std;
void fnRepeatCharacter(char='*',int=4);
int main()
{
	fnRepeatCharacter();
	fnRepeatCharacter('$');
	fnRepeatCharacter('#',9);	
}
void fnRepeatCharacter(char ch,int num)
{
	int i;
	if(num<0)
		return;
	for(i=0;i<num;i++)
		cout<<ch<<endl;
}
