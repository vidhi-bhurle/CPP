#include<iostream>
using namespace std;

int main()
{
	int temp[2][7];
	cout << "Enter the temperature\n";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<7; j++)
		{
			cout << "city" << (i+1) << "day" << (j+1) << endl;
			cin >> temp[i][j];
		}
	}
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<7; j++)
		{
			cout << "city" << (i+1) << "day" << (j+1) << "=" << temp[i][j] << endl;
		}
		cout<<"\n*********************************** \n";
	}
}
