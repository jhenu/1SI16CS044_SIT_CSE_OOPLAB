#include<iostream>

using namespace std;

class FractionType{
	int iNum,iDen;
	public:
		
		friend FractionType operator-( FractionType &f1 );
		void fnDisplay();
		FractionType ( int a, int b ){ iNum=a; iDen=b;}
		FractionType (){ iNum=0; iDen=1;}
	
		
		
		friend FractionType operator+( const FractionType&, const FractionType& ) ;
		friend FractionType operator-( const FractionType&, const FractionType& ) ;
		friend FractionType operator*( const FractionType&, const FractionType& ) ;
		friend FractionType operator++( FractionType& ) ;
		friend FractionType operator--(  FractionType& ) ;
		friend FractionType operator+( const FractionType&, int a) ;
		friend FractionType operator-( const FractionType&, int a) ;
		friend ostream& operator<<( ostream&, FractionType& );
		friend istream& operator>>( istream&, FractionType& );
		
};

ostream& operator<<(ostream &co, FractionType &f1)
{
	f1.fnDisplay();
}


istream& operator>>(istream &ci, FractionType &f1)
{
	ci>>f1.iNum>>f1.iDen;
	return ci;
}

 FractionType operator+( const FractionType &f1, const FractionType &f2)
{
	FractionType f3;
	f3.iNum = f1.iNum * f2.iDen + f2.iNum * f1.iDen;
	f3.iDen = f1.iDen * f2.iDen;
	return f3;
}

 FractionType operator-( const FractionType &f1, const FractionType &f2)
{
	FractionType f3;
	f3.iNum = f1.iNum * f2.iDen - f2.iNum * f1.iDen;
	f3.iDen = f1.iDen * f2.iDen;
	return f3;
}

 FractionType operator*( const FractionType &f1, const FractionType &f2) 
{
	FractionType f3;
	f3.iNum = f1.iNum * f2.iNum;
	f3.iDen = f1.iDen * f2.iDen;
	return f3;
}

 FractionType operator+( const FractionType &f1,int a )
{
	FractionType f3;
	f3.iNum = f1.iNum  + a * f1.iDen;
	f3.iDen = f1.iDen;
	return f3;
}

 FractionType operator-( const FractionType &f2, int a )
{
	FractionType f3;
	f3.iNum = f2.iNum  - a * f2.iDen;
	f3.iDen = f2.iDen;
	return f3;
}

 FractionType operator++( FractionType &f2 )
{
	return f2 + 1;
}


 FractionType operator--( FractionType &f2 )
{
	return f2 - 1;
}

 FractionType operator-( FractionType &f1 )
{
	f1.iNum = -1 * f1.iNum;
	return f1;
}


void FractionType :: fnDisplay( )
{
	cout<< "( " << iNum << " , " << iDen << ")";
}
		
int main()
{
	FractionType f1(2,3),f2(0,1),f3(0,1),f4(0,1);
	f2.fnDisplay();
	f2=f1+1;
	f2.fnDisplay();
	--f1;
	f3=-f3;
	f3.fnDisplay();
	cout<<endl<<f1<<endl;
	cin>>f2;
	cout<<f2;	
}
