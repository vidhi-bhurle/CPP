// command line arguments

#include <iostream>
using namespace std;

int main(int arg1, char** arg2)
{
	cout << "You have entered " << arg1 << " arguments:"
		<< "\n";

	for (int i = 0; i < arg1; ++i)
	
		cout << arg2[i] << "\n";
cout<<"Reached";
	return 0;
}

