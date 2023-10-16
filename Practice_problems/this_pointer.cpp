// this pointer

#include<iostream>
using namespace std;

class test
{
	int a,b;
	public:
		test();
		test(int,int);
		void show();
};

test::test()
{
	a = 10;
	b = 12;
}
test::test(int a,int b)
{
	this->a = a;
	this->b = b; 
}

void test::show()
{
	cout << a << " " << b << endl;
}

int main()
{
	test t1(12,12);
	t1.show();
	
	test t2;
	t2.show();
}
