#include<iostream>
using namespace std;
#include<string.h>

class String1{
	int len;
	char* ptr;
	public:
		String1(char*);
		String1& operator= (String1&);
		String1(String1&);
		void display();
};

String1::String1(char* sptr)
{
	len = strlen(sptr);
	ptr = new char[len+1];
	strcpy(ptr,sptr);
}

String1::String1(String1& s)
{
	len = strlen(s.ptr);
	ptr = new char[len+1];
	strcpy(ptr, s.ptr);
}

String1& String1:: operator= (String1& s)
{
	len = s.len;
	delete[] ptr;
	ptr = new char[len+1];
	strcpy(ptr,s.ptr);
	return *this;
}

void String1::display()
{
	cout << "Length is " << len << endl;
	cout << "String is " << ptr << endl;
}

int main()
{
	String1 s1("abc");
	String1 s2("xyz");
	// copy constr
	String1 s3 = s2;
	s3.display();
	
	// assignment operator
	s2 = s1;
	s2.display();
}
