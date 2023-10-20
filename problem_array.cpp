#include<iostream>
using namespace std;

int main()
{
	int m, n;
	cout << "Enter the size of array" << endl;
	cin >> m >> n;
	int arr[m][n];
	cout << "Enter the values \n";
	for(int i=0; i<m; i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> arr[i][j];
		}
	}			 
	
	cout << "Output \n";
	for(int i=0; i<m; i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i%2==0)
			{
				cout << arr[i][n-j-1] << " ";
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
}
