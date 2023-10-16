#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number: "<< endl;
	cin >> n;
	int i=2,num;
	int n1 = 0, n2 = 1;
	cout<<0 <<" " << 1 << " ";
	while(i <= n)
	{
		num = n1 + n2;
		cout << num << " ";
		n1 = n2;
		n2 = num;
		i++;
	}
	
}

// n
