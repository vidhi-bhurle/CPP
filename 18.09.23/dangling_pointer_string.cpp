// destructor

#include<iostream>
using namespace std;
#include<string.h>

class string1
{
	int len;
	char* ptr;
	public:
		string1(const char*);
		void stringdisplay()
		{
			cout << "String is " << ptr << endl;
			cout << "String length is " << len << endl;
		}
		~string1();
};

string1 :: string1(const char* sptr)
{
	len = strlen(sptr); // calculate the length of string provided in constructor
	ptr = new char[len+1];
	strcpy(ptr,sptr);
}

string1 :: ~string1()
{
	cout << "Destructor is invoked \n";
	if(ptr)
	delete[] ptr;
	ptr = NULL;
}

int main()
{
	string1 s1("Ameya");
	s1.stringdisplay();
	{
		string1 s2(s1);
		s2.stringdisplay();
		s2.~string1();
	}
	s1.stringdisplay();
}

