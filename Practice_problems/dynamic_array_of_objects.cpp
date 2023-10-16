// dynamic array of objects

#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		Complex();
		void getData();
		void display();

};

Complex::Complex()
{
	real = 10;
	img = 14;
}

void Complex::getData()
{
	cout << "Enter the real and imaginary value: \n";
	cin >> real >> img;
}

void Complex::display()
{
	cout << real << "+" << img << "*i" << endl;
}
                                                                                                                                                                                                
int main()
{
	int n;
	cout<<"Enter no. of objects : ";
	cin>>n;
	Complex* c1 = new Complex[n];
/*	for(int i=0; i<2; i++)  default is invoked
	{
		(c1+i)->display();
	}
*/	
	for(int i=0; i<n; i++)
	{
		(c1+i)->getData();
	}
	
	for(int i=0; i<n; i++)
	{
		
		(c1+i)->display();
	}
	delete[] c1;
}
