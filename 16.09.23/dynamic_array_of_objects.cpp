#include<iostream>
using namespace std;

class Complex 
{
	int real, img;
	public:
		Complex()
		{
			real = 5;
			img = 5;
		}
		Complex(int real, int img)
		{
			this->real = real;
			this->img = img;
		}
		void get()
		{
			cout << "Enter the real and imaginary \n";
			cin >> real >> img;
		}
        void put()
		{
			cout << real << "+" << img << "i" << endl;
		}
};

int main()
{
	int n;
	cout<<"Enter no. of complex numbers \n";
	cin >> n;
	Complex* c = new Complex[n];
	for(int i=0; i<n; i++)
	{
		c[i].get();
	}
	
	for(int i=0; i<n; i++)
	{
		c[i].put();
	}

}
