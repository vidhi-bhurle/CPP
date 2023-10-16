// multiple inheritance

#include<iostream>
using namespace std;
#include<string.h>

class P1
{
	char color[5];
	public:
		P1()
		{
			cout << "default of P1\n";
//			color = "blue";
		}
		P1(char* c)
		{
			strcpy(color,c);
		}
		void show()
		{
			cout << "color of printer 1 is "<< color << endl;
		}
		
};

class P2
{
	int price;
	public:
		P2()
		{
			cout << "default of P2 \n";
//			price = 1000;
		}
		P2(int p)
		{
			price = p;
		}
		void show()
		{
			cout << " printer 2 price" << price << endl; 
		}
};

class Printer:public P2, public P1
{
	int size;
	public:
		Printer()
		{
			cout << "In default of Printer \n";
		}
		Printer(int s, char* n, int p): P1(n), P2(p)
		{
			size = s;
		}
		void show()
		{
			cout << "In show of Printer" << endl;
		}
};


int main()
{
Printer cp(10, "red", 40);
cp.P2::show(); 
}

