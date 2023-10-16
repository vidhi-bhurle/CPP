#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			cout<<"In default of A \n";
		}
		A(int a)
		{
			cout<<"In para of A \n";
			this->a=a;
		}
		void display()
		{
			cout<<"In display of A class\n";
//			cout<<a<< endl;
		}
};

class B: public A
{
	int b;
	public:
		B()
		{
			cout<<"In default of B \n";
		}
		B(int b):A(10)
		{
			cout<<"In para of B \n";
			this->b = b;
		}
		void display()
		{
			A::display();
			cout<<"In display of B class\n";
//			cout<<b<< endl;
		}
};

int main()
{
	B bobj;
	bobj.display();
}
