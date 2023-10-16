#include<iostream>
using namespace std;

namespace first{
	void display()
	{
		int a=10;
		cout<<"Hello " << a;
	}
};
int main(){
 first::display();
	
}

