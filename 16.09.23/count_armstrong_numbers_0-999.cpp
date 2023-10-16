#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
	int rem,sum,cntArmstrong=0;
	for(int i=0; i<=999; i++)
	{
		int temp = i, cnt=0;
		sum = 0;
		while(i > 0)
		{
			cnt++;
			i = i / 10;
		}
		i = temp;
		for(;i > 0;)
		{
			rem = i % 10;
			sum = sum + pow(rem,cnt);
			i = i / 10;
		}
		i = temp;
		if(sum == i)
		{	
			cout << i <<endl;
			cntArmstrong++;
		}
	}
	cout<<"Total armstrong numbers from 0-999 is " << cntArmstrong;
	
}
