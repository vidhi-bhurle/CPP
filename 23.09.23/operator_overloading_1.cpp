#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		Complex();
		Complex(int,int);
		void getData();
		void display();
		Complex operator+(Complex&); 
		
};

Complex::Complex()
{
//	cout << "In default \n";
	real = 0;
	img = 0;
}

Complex::Complex(int r, int i)
{
	cout << "In para \n";
	real = r;
	img =i;
}


void Complex::getData()
{
	cout << "Enter the real and Imaginary: \n";
	cin >> real >> img;
}

void Complex :: display()
{
	if(img > 0)
	{
		cout << real << "+" << img << "i \n";
	}
	else
	{
		cout << real << img <<"i \n";
	}
}

Complex Complex::operator+(Complex& c)
{
	Complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;
}

int main()
{
	// parametrized  constr
	Complex c1(2,3);
	Complex c2(1,1);
	Complex c3 = c1 + c2;
	c3.display();
	
	// user-defined
	Complex u1, u2;
	u1.getData();
	u2.getData();
	
	Complex u3 = u1 + u2;
	u3.display();
}
