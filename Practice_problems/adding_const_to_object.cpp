#include<iostream>
using namespace std;

class Demo
{
	int a;
	public:
		Demo()
		{
			a=5;
		}
		int add(int a)
		{
			this->a = this->a + a;
			return this->a;
		}
};

int main()
{
	Demo d;
	cout<<"Result = "<<d.add(10);
	
}
