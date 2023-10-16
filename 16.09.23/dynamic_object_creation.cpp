// dyanmic object creation

#include<iostream>
using namespace std;

class Complex 
{
	int real, img;
	public:
		Complex()
		{
			real = 5;
			img = 5;
		}
		Complex(int real, int img)
		{
			this->real = real;
			this->img = img;
		}
		void display()
		{
			cout << real << "+" << img << "i" << endl;
		}
};

int main()
{
	Complex* c = new Complex();
	c->display();
	
	Complex* c1 = new Complex(10,2);
	c1->display();
	
	delete c;
	delete c1;
}
