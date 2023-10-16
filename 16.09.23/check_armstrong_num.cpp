#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number: \n";
	cin >> n;
	int temp = n;
	int rem, sum = 0, count = 0;
	while(n>0)
	{
		count++;
		n = n / 10; 
	}
	n = temp;
	while(n > 0)
	{
		rem = n % 10;
		sum = sum + pow(rem,count);
		n = n / 10;
	}
	n = temp;
	if(sum == n)
	{
		cout << n << " is an armstrong number" <<endl;
	}
	else
	{
		cout << n << " is not an armstrong number" <<endl;
	}
}
