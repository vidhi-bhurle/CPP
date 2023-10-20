#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
	int a[] = {30, 40, 50, 20, 20, 10, 90, 10, 10, 10};
	int tempmax = 0, maxprice = 0, index = -1;
	for(int i=1; i< sizeof(a)/sizeof(a[0]) - 1; i++)
	{
		if(a[i] > a[i-1] && a[i] > a[i+1])
		{
			tempmax = a[i];
			if(maxprice < tempmax)
			{
				maxprice = tempmax;
				index = i;
			}
		}
	}
	cout <<"house no. " << index+1 <<  " whose price is " << a[index] << endl;
}
