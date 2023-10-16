// constant object

#include<iostream>
using namespace std;

class Complex
{
	int real, img;
	public:
		Complex();
		Complex(int, int);
		void display() const;
};

Complex::Complex()
{
	real = 10;
	img = 12;
}

Complex::Complex(int r, int i)
{
	real = r;
	img = i;
}

void Complex::display() const
{
	if(img < 0)
	{
		cout << real << img << "*i"<<endl;
	}
	else
	{
		cout << real << "+" << img << "*i" <<endl;
	}
}

int main()
{
	const Complex c1; // const object can call const function
	c1.display();
	
	Complex c2(2,3); // non-const object can call both const and non-const function
	c2.display();
	
}
