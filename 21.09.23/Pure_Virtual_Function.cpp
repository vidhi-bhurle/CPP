#include<iostream>
using namespace std;

class Employee
{
	int id;
	public:
		Employee();
//		Employee(int);
		void display();
		virtual int findsalary()=0;
};

Employee::Employee()
{
	cout<<"In default of emp\n";
	id=0;
}

//Employee::Employee(int i)
//{
//	cout<<"In para of emp\n";
//	id=i;
//}

void Employee::display()
{
	cout<<"Id of an emp is "<<id<<endl;
}


class WageEmployee: public Employee
{
	int hrs, rate;
	public:
		WageEmployee();
//		WageEmployee(int,int,int);
		void display();
		int findsalary();
};

WageEmployee::WageEmployee()
{
	cout<<"In default of wage\n";
	hrs=0;
	rate=0;
}

//WageEmployee::WageEmployee(int i,int h,int r):Employee(i)
//{
//	cout<<"In para of wage\n";
//	hrs=h;
//	rate=r;	
//}

int WageEmployee::findsalary()
{
	return hrs*rate;
}

void WageEmployee::display()
{
	Employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}

class SalesManager : public WageEmployee
{
	int sales,comm;
	public:
		SalesManager();
//		SalesManager(int,int,int,int,int);
		void display();
		int findsalary();
};

SalesManager::SalesManager()
{
	cout<<"In default of sales\n";
	sales=comm=0;
}
//SalesManager::SalesManager(int i, int h, int r, int s, int c):WageEmployee(i,h,r)
//{
//	cout << "In Para of sales \n";
//	sales = s;
//	comm = c;
//}
void SalesManager::display()
{
	WageEmployee::display();
	cout << sales << endl;
	cout << comm << endl;
}
int SalesManager::findsalary()
{
	return (WageEmployee::findsalary()) + (sales * comm);
}

int main()
{
    Employee* ptr;
//	Employee em1;
//	ptr = &em1;
	cout << ptr->findsalary()<<endl;
	
	// wage employee
//	WageEmployee wm1;
//	ptr = &wm1;
	cout << ptr->findsalary()<<endl;
	
	//salesmanager
//	SalesManager sm1;
//	ptr = &sm1;
	cout << ptr->findsalary()<<endl;
	
}
