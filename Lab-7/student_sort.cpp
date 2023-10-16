#include <iostream>     
using  namespace std;  
#include<string.h>
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"Enter date\n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<"Date: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student
{
	int rollno;
	int marks[5];
	date d;
	
	public:
		void get()
		{
			cout<<"Enter rollno\n";
			cin>>rollno;
			cout<<"Enter the marks: \n";
			int sum = 0;
			for(int i=0; i<5; i++)
			{
				cin>>marks[i]; 
			}
			d.get();
		}
		void put()
		{
			cout<<"Roll no.: "<<rollno<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<"Marks of subjects " << (i+1) << " : "<< marks[i] << endl; 
			}
			average();
			d.put();
			cout << endl;
		}
		int getrollno()
		{
			return rollno;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void average()
		{
			int sum = 0;
			float avg;
			for(int i=0; i<5; i++)
			{
				sum += marks[i];
			}
			avg = (float) sum/5;
			cout << "Average: " << avg << endl;
		}
		
		
};
int main()
{
	student St[10],temp;
	int i,n,j;
	cout<<"Enter no. of students: \n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		St[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		St[i].put();
		
	}
	cout << endl;
	cout<<"\n Sort students by Roll No. \n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(St[i].getrollno()>St[j].getrollno())
			{
				temp=St[i];
				St[i]=St[j];
				St[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		St[i].put();
	}
}

