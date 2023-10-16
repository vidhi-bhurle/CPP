#include<iostream>
using namespace std;

void sqr(int);
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	sqr(n);
}
void sqr(int a)
{
	int s = a*a;
	printf("Square of %d is %d",a,s);//C++ IS EXTENSION OF C, SO WE CAN USE ALL PREDEFINED FUNCTION IN IT
	
}
