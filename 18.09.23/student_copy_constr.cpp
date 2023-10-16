#include<iostream>
using namespace std;
#include<string.h>
class student
{
	int rno;
	char name[50];
	double fees;
	public:
		student(int rno, char name[], double fees)
		{
			this->rno = rno;
			strcpy(this->name, name);
			this->fees = fees;
		}
		void display()
		{
			cout << "Roll no.: " << rno << endl;
			cout << "Name: " << name << endl;
			cout << "fees: " << fees << endl;
		}
		student(student &s)
		{
			rno = s.rno;
			strcpy(name,s.name);
			fees = s.fees;
		}
};

int main()
{
	student s(17, "Ameya",111200);
	s.display();
	student Ameya(s);
	Ameya.display();
}
