 #include<iostream>
using namespace std;

class A
{
    int a;
	public:
		A()
		{
			cout<<"In default of A \n";
		}
		A(int );
		void display();
		
};

A::A(int p)
    {
	cout<<"In para of A \n";
	a=p;
    }
    
void A :: display()
    {
		cout<< a<<endl;
    }
    
    
class B: public A
{
	int b;
	public:
		B();
		B(int, int);
		void display();
};

B::B()
{
	cout<<"In default of B \n";
}
B::B(int p,int q) : A(p)
{
	b = q;
}

void B::display()
{
	A::display();
	cout<<b;
}

int main()
{
	B bobj(10,20);
	bobj.display();
	B bobj1;
	
}
