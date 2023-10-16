#include<iostream>
using namespace std;

class A
{
	public:
		class B
        {
			public:
				void show()
				{
					cout << "Inner class \n";
				}
		};
	public:	
		void display()
		{
			cout << "Outer class \n";
		}
};

int main()
{
	A::B bobj;
	bobj.show();
	A obj;
	obj.display();
    //bobj.display();--->display() is not in scope of class B i.e inner class
	
}
