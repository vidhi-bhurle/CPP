// pass by reference 

#include<iostream>
using namespace std;

void swap(int& p, int& q)
{
 	int temp = q;
 	q = p;
 	p = temp;
}


int main()
{
	int a,b;
	cout << "Enter the values of a & b: \n";
	cin >> a >> b;
	cout << "Before swapping a: " << a << " & b: " << b << endl;
	swap(a,b);
	cout << "After swapping a: " << a << " & b: " << b << endl; 
}
