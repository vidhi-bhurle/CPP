#include<iostream>
using namespace std;
#include<string.h>

class string1
{
	int len;
	char* ptr;
	public:
		string1(char*);
		string1(char,int);
		string1(int);
		string1();
		void show();
};

string1::string1(char* ptr1)
{
	this->len = strlen(ptr1);
	ptr = new char[len+1];
	strcpy(this->ptr,ptr1);
}

string1::string1(char ch, int len)
{
	this->len = len;
	int i;
	ptr = new char[this->len+1];
	for(i=0; i<len; i++)
	{
		ptr[i] = ch;
	}
	ptr[i] = '\0';
}
string1::string1(int len)
{
	this->len=len;
	ptr=new char[this->len+1];
	char ch[this->len+1];
	cout<<"Enter string\n";
	cin>>ch;
	strcpy(ptr,ch);
}
string1::string1(){
	int len;
	cout<<"Enter String length \n";
	cin>>len;
	this->len = len;
	char ptr1[this->len+1];
	ptr = new char[this->len+1];
	cout<<"Enter the string \n";
	cin>>ptr1;
	strcpy(this->ptr,ptr1);
}
void string1:: show()
{
//	cout<<"String is "<<this->ptr<<endl;
	cout<<"String is "<<ptr<<endl;
//	cout<<"Length is "<<this->len<<endl;
	cout<<"Length is "<<len<<endl;
}

int main()
{
	string1 s1("cdac");
	s1.show();
	string1 s2('*',50);
	s2.show();
	string1 s3(5);
	s3.show();
	string1 s4;
	s4.show();
}
