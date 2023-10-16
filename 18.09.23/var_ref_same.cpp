#include<iostream>
using namespace std;
#include<string.h>

class string1
{
	int len;
	char* ptr;
	public:
		string1(char* sptr)
		{
			len =strlen(sptr);
			ptr=new char[len+1];
			strcpy(ptr,sptr);
		}
		void stringdisplay()
		{
			cout<<"String is "<<ptr<<endl;
			cout<<"Length is "<<len<<endl;
		}
		string1 (string1 &s1)
		{
			len=s1.len;
			ptr=new char[len+1];
			strcpy(ptr,s1.ptr);
		}
		~string1()
		{
			cout<<"Destructor will invoked\n";
			if(ptr)
			{
				delete [] ptr;
				ptr = NULL;	
			}
		}
};

int main()
{
	string1 s1("Vidhi");
	s1.stringdisplay();
	{
		string1 s2(s1);
		s2.stringdisplay();
		s2.~string1();
	}
	s1.stringdisplay();
	
}
