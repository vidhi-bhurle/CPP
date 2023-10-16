// Q2

#include<iostream>
using namespace std;
class String1
{
	int length;
	char* sptr;
	public:
		// constructor
		String1();
		String1(char*);
		
		// user-defined string methods
		int ustrlen(char*);
		void ustrcpy(char*,char*);
		void ustrcat(char*, char*);
		
		// operator overloaded
		String1 operator=(String1&);
		void display();
		
		// copy constructor
		String1(String1&);
		
		// destructor
		~String1();
};

// default constructor
String1::String1()
{
	cout << "Enter the length of string: \n";
	cin >> length;
	sptr = new char[length+1];
	cout << "Enter the String: \n";
	cin >> sptr;
}

// user-defined string length function
int String1::ustrlen(char* str)
{
	int length = 0;
	while(*str != '\0')
	{
		length++;
		str++;
	}
	return length;
}

// user-defined string copy function
void String1::ustrcpy(char* target,char* source)
{
	while(*source != '\0')
	{
		*target = *source;
		target++;
		source++;
	}
}

// Parametrized constructor
String1::String1(char* c)
{
	this->length = ustrlen(c);
	sptr = new char[this->length+1];
	ustrcpy(sptr,c);
}

// assignment operator overloading
String1 String1::operator=(String1& str)
{
	this->length = str.length;
	sptr = new char[this->length+1];
	ustrcpy(this->sptr,str.sptr);
	return (*this);
}

// user-defined copy constructor
String1::String1(String1& str)
{
	length = str.length;
	sptr = new char[length+1];
	ustrcpy(sptr,str.sptr);
}

// user-defined string concatination
void String1::ustrcat(char* target, char* source)
{
	while(*target != '\0')
	{
		target++;
	}
	
	while(*source != '\0')
	{
		*target = *source;
		target++;
		source++;
	}
}
// destructor
String1::~String1()
{
	length = 0;
	if(sptr)
	delete[] sptr;
	sptr = NULL;
}

// display function
void String1::display()
{
	cout << "Length of string: " << length << endl;
	cout << "String: " << sptr << endl;
}

int main()
{
	String1 s1("Ameya"); // parametrized constructor
	s1.display();
	// 1/
	String1 s2; // default constructor
	s2.display();
	s2 = s1; // assignment operator is overloaded
	s2.display(); 
	
	
	// 2.
	String1 s3(s1); // user-defined copy constructor
	s3.display();
	
	// 3.
	s3.~String1();
	s3.display();
	
}
