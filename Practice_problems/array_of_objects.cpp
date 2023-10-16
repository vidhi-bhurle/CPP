// array of objects

#include<iostream>
using namespace std;

class Student
{
	int rno;
	float fees;
	public:
		Student();
		Student(int,float);
		void getData();
		void display();
};

Student::Student()
{
	rno = 12;
	fees = 110000;
}

Student::Student(int r, float f)
{
	fees = f;
	rno = r;
}

void Student::display()
{
	cout << "Roll No.: " << rno << endl;
	cout << "fees: " << fees <<endl;
}

void Student::getData()
{
	cout << "Enter Roll No.: \n";
	cin >> rno;
	cout << "Enter the fees: \n";
	cin >> fees;
}

int main()
{
	int n;
	cout << "Enter the no. of students \n";
	cin >> n;
	Student s[n];
	
	
	// input data
	for(int i=0; i<n; i++)
	{
		s[i].getData();
	}
	cout << "\n";
	cout << "Students Data: \n";	
	
	
	
	// display data
	for(int i=0; i<n; i++)
	{
		s[i].display();
	}
	
}
