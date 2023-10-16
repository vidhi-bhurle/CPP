#include<iostream>
using namespace std;

void sum(int ,int );

int main()
{
	int a,b;
	cout << "Enter the value of a & b: \n";
	cin >> a >> b;
	sum(a,b);
	cout << a << endl;
}

void sum(int a, int b)
{
	a = a + b;
}
