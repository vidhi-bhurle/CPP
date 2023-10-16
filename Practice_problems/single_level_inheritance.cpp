#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			cout << "default constr A \n";
		}
		A(int p)
		{
			a = p;
			cout << "In para of A " << a << endl;
		}
		void display()
		{
			cout << "display of A \n";
		}
};

class B:public A
{
	int b;
	public:
		B()
		{
			cout << "default constr B \n";
		}
		
		B(int  p, int q):A(p)
		{
			b = q;
			cout << "In para of B " << b  << endl;
		}
		void display()
		{
			A::display();
			cout << "display of B \n";
		}
};

int main()
{
	B obj(12, 4);
//	obj.display();
}
