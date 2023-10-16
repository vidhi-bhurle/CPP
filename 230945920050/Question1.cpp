//Q1
#include<iostream>
using namespace std;

class Complex
{
	int real,imaginary;
	public:
		Complex();
		Complex(int,int);
		Complex operator + (Complex&);
		Complex operator - (Complex&);
		Complex operator - ();
		Complex operator ++();
		Complex operator ++(int);
		void display();		
};

Complex::Complex()
{
	real = 5;
	imaginary = 4;
}

Complex::Complex(int r,int i)
{
	real = r;
	imaginary = i;
}

// '+' operator overloaded
Complex Complex::operator +(Complex& c)
{
	Complex temp;
	temp.real = this->real + c.real;
	temp.imaginary = this->imaginary + c.imaginary;
	return temp; 
}

// '-' operator overloaded
Complex Complex::operator-(Complex& c)
{
	Complex temp;
	temp.real = this->real - c.real;
	temp.imaginary = this->imaginary - c.imaginary;
	return temp; 
}
// negation operator overloaded
Complex Complex::operator-()
{
	this->real = -this->real;
	this->imaginary = -this->imaginary;
	return (*this);
}

// "++" pre-increment operator overloading
Complex Complex::operator ++()
{
	this->real = ++this->real;
	this->imaginary = ++this->imaginary;
	return (*this);
}

// "++" post incremnet operator overloading
Complex Complex::operator ++(int x)
{
	Complex temp = (*this);
	this->real = ++this->real;
	this->imaginary = ++this->imaginary;
	return temp;
}
void Complex::display()
{
	if(imaginary < 0)
	{
		cout << real << imaginary << "*i" << endl;
	}
	else
	{
		cout << real << "+" <<imaginary << "*i" << endl;
	}
}
int main()
{
	Complex c1,c2,c3,c4;
	// 1.
	c3 = c1 + c2;
	c3.display();
	
	// 2.
	c3 = c1 - c2;
	c3.display();
	
	// 3.
	c2 = -c1;
	c2.display();
	
	// 4.
	c4 = ++c1;
	c4.display();
	
	// 5.
	c4 = c1++;
	c4.display();
	c1.display();
	
}


