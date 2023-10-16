// copy constructor date class

#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public:
		Date(int, int, int);
		void display();
};

Date :: Date(int d,int m,int y)
{
	dd = d;
	yy = y;
	mm = m;
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

