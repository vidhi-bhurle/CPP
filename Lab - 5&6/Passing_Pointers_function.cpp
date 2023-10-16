#include<iostream>
using namespace std;

void swap(int*,int*);
int main()
{
	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	cout<<"Before swapping : "<< a <<"\t"<< b <<endl;
	swap(&a,&b);
	//cout<<"After swapping : "<< a <<"\t"<< b <<endl;
	
}
void swap(int* p,int* q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"After swapping : "<< *p <<"\t"<< *q <<endl;
}
