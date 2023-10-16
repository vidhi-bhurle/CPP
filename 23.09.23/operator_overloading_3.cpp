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
		Complex operator++(); 
        Complex operator++(int); 
		
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

Complex Complex::operator ++()
{
	++this->real;
	++this->img;
	return *this;
}

Complex Complex::operator ++(int)
{
	Complex temp = *this;
	++this->real;
	++this->img;
	return temp;
}

int main()
{
	// parametrized  constr
	Complex c1(2,3);
	Complex c2(1,1);
	Complex c4 = ++c1; // 3+4i
	Complex c3 = c2++; // 1+1i
	c3.display();
	c4.display();
	
	// user-defined
//	Complex u1, u2;
//	u1.getData();
//	u2.getData();
//	
//	Complex u3 = -u2;
//	u3.display();
}
