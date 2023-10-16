// copy constructor

#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public:
		Date();
		Date(int,int,int);
		Date(Date&);
		void display();
};

Date::Date()
{
	dd = 12;
	mm = 2;
	yy = 2006;
}

Date::Date(int d,int m,int y)
{
	dd = d;
	mm = m;
	yy = y;
}


Date::Date(Date& d)
{
	dd = d.dd;
	mm = d.mm;
	yy = 2001;
}

void Date::display()
{
	cout << dd << "/" << mm << "/" << yy << endl;
}


int main()
{
	cout << "Object 1: \n";
	Date d1;
	d1.display();
	
	cout << "Data of object1 is copied in object2 \n";
	Date d2(d1);
	d2.display();
}
