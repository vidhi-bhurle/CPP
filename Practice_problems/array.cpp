// array ()

#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int i;
	for(i=0; i<5; i++)
	{
//		cout << arr[i] << " ";	// subscript notation
		cout << arr + i << " "; // pointer notation
	} 
	
}
