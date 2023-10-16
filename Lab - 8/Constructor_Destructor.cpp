#include<iostream>
using namespace std;


class string1
{

	public:
		string1()
		{
			cout << "Constructor is invoked \n";
		}
		~string1()
		{
			cout<<"Destructor will invoked\n";
		}
};

int main()
{
	string1 s;
//	s.~string1();
	
}
