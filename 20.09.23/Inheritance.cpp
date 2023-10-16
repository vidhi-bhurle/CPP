 #include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"In default of A \n";
		}
		void display()
		{
			cout<<"In display of A class\n";
		}
};

class B: public A
{
	public:
		B()
		{
			cout<<"In default of B \n";
		}
		void display()
		{
			cout<<"In display of B class\n";
		}
};

int main()
{
	B bobj;
	bobj.display();
}
