// constructor
#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public:
		Date(); // no argument constructor
		Date(int, int, int);  
		void display();
};

// returntype className :: functionName(arguments) ---> function
// className :: constructorName () ---> constructor

Date::Date()
{
	dd = 7;
	mm = 4;
	yy = 2017;
}

Date::Date(int d, int m, int y) // parametrized constructor
{
	dd = d;
	mm = m;
	yy = y;
}

void Date::display()
{
	cout << dd << "/" << mm << "/" << yy << endl;
}

int main()
{
	Date d;
	d.display();
	
	Date d1(12,11,2001);
	d1.display();
}
