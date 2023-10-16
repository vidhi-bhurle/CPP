#include<iostream>
using namespace std;

// template function
template <class T>
T add(T& a,T& b)
{
	return a + b;	
} 



int main()
{
	int a = 10;
	int b = 12;
	cout << add(a,b) << endl;
}
