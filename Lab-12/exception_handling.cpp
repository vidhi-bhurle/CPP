#include<iostream>
using namespace std;


float division(int x, int y)
{
	if(y == 0)
	{
		throw "Division by zero";
	}
	return x/y;
}
int main()
{
	int i = 25;
	int j;
	try
	{
		cin >> j;
		float d = division(i, j);
		cout << d << endl;
//		if(j == 0)
//		{
//			throw "Division by zero";	
//		}
	}
	catch(char* e)
	{
		cout << e << endl;
	}
	
}
