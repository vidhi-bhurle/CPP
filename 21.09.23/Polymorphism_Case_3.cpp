#include<iostream>
using namespace std;

class Employee
{
	int id;
	public:


		void display();
		virtual int findsalary();
};

void Employee::display()
{
	cout<<"Id of an emp is "<<id<<endl;
}

int Employee:: findsalary()
{
			return 0;
}
class WageEmployee: public Employee
{
	int hrs, rate;
	public:

		void display();
		int findsalary();
};


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
		
		void display();
		int findsalary();
};



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
	Employee em1;
	ptr = &em1;
	cout << ptr->findsalary()<<endl;
	
	// wage employee
	WageEmployee wm1;
	ptr = &wm1;
	cout << ptr->findsalary()<<endl;
	
	//salesmanager
	SalesManager sm1;
	ptr = &sm1;
	cout << ptr->findsalary()<<endl;
	
}
