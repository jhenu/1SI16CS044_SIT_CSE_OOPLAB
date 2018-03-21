#include<iostream>
using namespace std;
int main(){
	int ival;
	int &refval=ival;
	
	ival=6;
	cout<<ival<<endl;
	cout<<refval<<endl;
	
	refval++;
	
	cout<<ival<<endl;
	cout<<refval<<endl;
	
	return 0;
}
