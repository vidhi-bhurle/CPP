/*
student           sports
-rno,m1,m2		  - sm
			
		result
		- tot, avg
		
*/
// multiple inheritance

#include<iostream>
using namespace std;

class Student
{
	int rno,m1,m2,m3,m4,m5;
	public:
		Student(int m1,int m2,int m3,int m4,int m5,int rno)
		{
			this->m1 = m1;
			this->m2 = m2;
			this->m3 = m3;
			this->m4 = m4;
			this->m5 = m5;
			this->rno = rno;
		}
		void getData()
		{
			cout << "Enter roll no.: \n";
			cin >> rno;
			cout << "Enter marks for 5 subjects: \n";
			cin >> m1 >> m2 >> m3 >> m4 >> m5;
		}
		void display()
		{
			cout << "Roll no.: " << rno << endl;
			cout << "Subject \t Marks \n";
			cout << "Subject 1 \t" << m1<<endl;
			cout << "Subject 2 \t" << m2<<endl;
			cout << "Subject 3 \t" << m3<<endl;
			cout << "Subject 4 \t" << m4<<endl;
			cout << "Subject 5 \t" << m5<<endl;
		}
	
};

class Sports
{
	int sm;
	public:
		Sports(int sm)
		{
			this->sm = sm;
		}
		void getData()
		{
			cout << "Enter the sports marks \n";
			cin >> sm;
		}
		void display()
		{
			cout << "Sports marks \t" << sm << endl; 
		}
};

class Result : public Student, public Sports
{
	int tot;
	float avg;
	public:
		Result(int m1,int m2,int m3,int m4,int m5,int rno, int sm):Student(m1, m2, m3, m4, m5,rno),Sports(sm)
		{

		}
		void get()
		{
			Student::getData();
			Sports::getData();
		}
		void display()
		{
			
			tot = m1 + m2 + m3 + m4 + m5 + sm;
			avg = (float)tot / 6;
			cout << "Average of student" << avg << endl;
		}
};



int main()
{
	Result r(10, 10, 10, 10, 10, 10, 10);
	r.Student::display();
	 
}

