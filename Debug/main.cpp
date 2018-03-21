#include<iostream>
#include<cmath>
using namespace std;
class Matrix
{
	int rows,columns;
	int **matrix;
	public :
		Matrix(){};
		Matrix(int, int);
		~Matrix(){delete []matrix;}
		Matrix operator+(const Matrix&)const;
		Matrix operator-(const Matrix&)const;
		int operator==(const Matrix&)const;
		friend ostream& operator<<(ostream&, const Matrix&);
		friend istream& operator>>(istream&, Matrix&);
		Matrix operator=(const Matrix&);
};


Matrix :: Matrix(int a, int b)
{
	rows = a;
	columns = b;
	matrix=new int*[rows];
	for(int row=0;row<rows;row++)
		matrix[row]=new int[columns];

}

istream& operator>>(istream &in, Matrix &m)
{
	cout<<"enter the matrix elements"<<endl;
	for(int i=0;i<m.rows;i++)
		for(int j=0;j<m.columns;j++)
			in>>m.matrix[i][j];
	return in;
}

ostream& operator<<(ostream &out, const Matrix &m)
{

	for(int i=0;i<m.rows;i++)
	{
		for(int j=0;j<m.columns;j++)
			out<<m.matrix[i][j]<<"\t";
		out<<endl;
	}
	return out;
}

int Matrix :: operator==(const Matrix &m2) const
{
	if(rows==m2.rows && columns==m2.columns)
		return 1;
	return 0;
}

Matrix Matrix :: operator+(const Matrix &m2) const
{
	Matrix m3(rows, columns);
//	Matrix m4(m3);
	for(int i=0;i<rows;i++)
		for(int j=0;j<columns;j++)
			m3.matrix[i][j]=matrix[i][j]+m2.matrix[i][j];

	return m3;
}


Matrix Matrix :: operator-(const Matrix &m2) const
{
	Matrix m3(rows, columns);
	for(int i=0;i<rows;i++)
		for(int j=0;j<columns;j++)
			m3.matrix[i][j]=matrix[i][j]-m2.matrix[i][j];

	return m3;
}

Matrix Matrix:: operator=(const Matrix &m2)
{
	if(rows==m2.rows && columns==m2.columns)
	{
		for(int i=0;i<rows;i++)
			for(int j=0;j<columns;j++)
				matrix[i][j]=m2.matrix[i][j];

	}
	cout <<"Assignment over" << endl;
	return *this;
}

int main( void )
{
	int m,n,p,q;
	cout<<"enter the order of m1"<<endl;
	cin>>m>>n;
	Matrix m1(m,n);

	cout<<"enter the order of m2"<<endl;
	cin>>p>>q;
	Matrix m2(p,q);

	if(m1==m2)
	{
		cin>>m1;
		cin>>m2;
		Matrix m3(p,q);
		m3=m1+m2;
		cout<<"addition of "<< endl <<m1<< endl<<" and "<<endl << m2<<"--------------------"<<endl <<m3<<endl;
		Matrix m4(p,q);
		m4=m1-m2;
		cout<<"subtraction of "<< endl <<m1<< endl<<" and "<<endl << m2<<"--------------------"<<endl <<m4<<endl;

	}
	else
		cout<<"Matrix cannot be added "<<endl;
	return 0;
}
