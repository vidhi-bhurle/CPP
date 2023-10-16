// implicit conversion

#include<iostream>
using namespace std;

void add(int a,int b)
{
	cout << "sum of a & b "<< a+b << endl;
} 

int main()
{
	int a=10,b=20;
	add(a,b);
	
	
	char p='A',q='B'; // implicit type conversion
	add(p,q);
}
