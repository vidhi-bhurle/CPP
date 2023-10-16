#include <iostream>
using namespace std;

// sort logic
//template <class T>
void sort1(int b[], int n)
{
	for(int i=1; i<=n-1; i++)
	{
		for(int j=0; j<=n-i-1; j++)
		{
			if(b[j] > b[j+1])
			{
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
}

int main()
{
	int a[5] = {4 ,1 ,3 ,2 ,5};
	sort1(a, 5);
	
	for(int i=0; i<=4; i++)
	{
		cout << a[i] << " ";
	}
}
