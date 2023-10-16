#include<iostream>
using namespace std;

class Demo
{
	int a;
	public:
		demo()
		{
			a = 5;
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
	d.add(10);
}
