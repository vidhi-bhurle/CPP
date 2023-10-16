// copy constructor date class user-defined

#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public:
		Date(int, int, int);
		Date(Date &);
		void display();
};

Date :: Date(int d,int m,int y)
{
	dd = d;
	yy = y;
	mm = m;
}

Date::Date(Date &d)
{
	dd = d.dd;
	mm = d.mm;
	yy = 24;
}

void Date :: display()
{
	cout << dd << "/"<<mm<<"/"<<yy << endl;
}

int main()
{
	Date d(18,9,23);
	d.display();
	Date d1(d);
	d1.display();
}

