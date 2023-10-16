// function overloading

#include<iostream>
using namespace std;
#include<string.h>
class Student
{
	int rno;
	char names[20];
	public:
		Student();
		Student(int, const char*);
		void display();
};

Student::Student()
{
	rno = 50;
	strcpy(names,"Ameya");
}

Student::Student(int r,const char* n)
{
	rno = r;
	strcpy(names,n);
}

void Student::display()
{
	cout << "Name: " << names << endl;
	cout << "Roll No: " << rno << endl;
}

int main()
{
	Student s(21,"Ram");
	s.display();
}
