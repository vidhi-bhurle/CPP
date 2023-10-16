#include <iostream>
using namespace std;
#include <string.h>
class Address
{
	long int pinNo;
	int houseNo;
	char cityName[10];
	public:
		Address()
		{
			pinNo = 411016;
			houseNo = 21;
			strcpy(cityName, "Pune");
		}
		Address(long int p, int h, char n[])
		{
			pinNo=p;
			houseNo=h;
			strcpy(cityName, n);
		}
		void display();
		
};

void Address :: display()
{
	cout<<"Address : " << houseNo << ", " << cityName << " - " << pinNo << endl;
	cout << endl;
}

class Student
{
	int rollNo;
	int marks[5];
	Address add1;
	public:
		Student();
        Student(int,int[],long int,int,char[]);
		void display();		
};

Student::Student()
{
	rollNo=50;
	int m[5] = {40, 50, 60, 70, 80};
	for(int i=0; i<5; i++)
	{
		marks[i] = m[i];
	}
}

Student::Student(int r, int m[], long int pi, int hn, char cn[]):add1(pi, hn, cn)
{
	rollNo = r;
	for(int i=0; i<5; i++)
	{
		cin>>marks[i];
	}
}

void Student :: display()
{
	int sum = 0;
	float avg;
	cout << "----Student---- \n";
	cout << "Roll no.: " << rollNo << endl;
	cout << "Marks: \n";
	
	for(int i=0; i<5; i++)
	{
		cout << "Subject " << (i+1) <<" : " << marks[i] <<endl;
		sum += marks[i];
	}
	avg = (float) sum / 5;
	cout<<"Average : " << avg<<endl;
	add1.display();
}

int main()
{
	cout << "Default \n";
	Student s1;
	s1.display();
	
	cout << "Parameterized \n";
	
	int m[5];
	Student s2(30,m, 444001, 47, "Akola");
	s2.display();
    cout<<"*****************";
}















