#include<iostream>
using namespace std;

int main()
{
	int sum_even=0, sum_odd=0, i=1;
	while(i<=20)
	{
		if(i%2==0)
		{
			sum_even=sum_even+i;
		}
		else
		{
			sum_odd=sum_odd+i;
		}
		i++;
	}
	cout<<"Sum of Even num between 1-20 : "<<sum_even<<endl;
	cout<<"Sum of Odd num between 1-20 : "<<sum_odd<<endl;
	
}
