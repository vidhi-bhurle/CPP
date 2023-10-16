// array of character pointer
#include<iostream>
using namespace std;

int main()
{
	const char* names[] = {"rohan", "rahul", "ram"};
//	for(int i=0; i<5; i++)
//	{
//		
//	}
	
	for(int i=0; i<3; i++)
	{
//		cout << **(ptr+i) << " "; // pointer notation
		cout << *(names+i) << " ";
	}
	
	cout << *(*(names+2)+2) << endl;
}
