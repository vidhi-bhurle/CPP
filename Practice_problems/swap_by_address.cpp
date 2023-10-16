// pass by address
#include<iostream>
using namespace std;

void swap(int* p, int* q) // definition
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int a,b;
	cout << "Enter the values of a & b: \n";
	cin >> a >> b;
	cout << "Before swapping a: " << a << " & b: " << b << endl;
	swap(&a,&b);
	cout << "After swapping a: " << a << " & b: " << b << endl; 
}


