// DMA

#include<iostream>
using namespace std;


int main()
{
//	int* a = new int(12); ---> dynamic memory allocation for int
//	int* a = new int[4];  ---> 
	for(int i=0; i<5; i++)
	{
		*(a+i) = (i);
	}
//	cout << *(a+3) << endl;
	for(int i=0; i<5; i++)
	{
		cout << *(a+i) << endl;	
	}
	
	
	delete[] a;
} 
