#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout << "constructor of A is invoked \n";
		}
		~A()
		{
			cout << "destructor of A is invoked \n";
		}
};

class B: public A
{
	public:
		B()
		{
			cout << "constructor of B is invoked \n";
		}
		~B()
		{
			cout << "destructor of B is invoked \n";
		}
};

class C : public A
{
	public:
		C()
		{
			cout << "constructor of C is invoked \n";
		}
		~C()
		{
			cout << "destructor of C is invoked \n";
		}
};

int main()
{
	B bobj;
	C cobj;
}
