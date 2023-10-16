#include <iostream>
using namespace std;
 
class Complex
{
private:
    int real, imag;
public:                                                                                                                                 
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend void operator << (ostream &cout, Complex &c);
    friend void operator >> (istream &cin,  Complex &c);
};
 
void operator << (ostream &cout,  Complex &c)
{
    cout << c.real;
    cout  <<"+"<< c.imag <<"i"<< endl;
   
}
 
void operator >> (istream &d,  Complex &c)
{
    cout << "Enter Real Part ";
    d >> c.real;
    
    cout << "Enter Imaginary Part ";
     d >> c.imag;
    
}
 
int main()
{
   Complex c1;
   cin >> c1;//<<(c1)
   cout << "The complex object is ";
   cout << c1;
   return 0;
}
