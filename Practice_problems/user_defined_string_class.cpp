//user-defined string class

#include<iostream>
using namespace std;
#include<string.h>
class String1
{
	int len;
	char* ptr;
	public:
		String1(char* );
		String1();
		void display();
};

String1::String1(char* p)
{
	len = strlen(p);
	ptr = new char[len+1];
	strcpy(ptr,p);
}                                       

String1::String1()
{
	cout << "Enter the length: \n";
	cin >> len;
	ptr = new char[len+1];
	cout << "Enter the string: \n";
	cin >> ptr;
}

void String1::display()
{
	cout << "Length : " << len << endl;
	cout << "String : " << ptr << endl; 
}

int main()
{
	String1 s1("Ameya");
	s1.display();
	
	
	String1 s2;
	s2.display();
}
