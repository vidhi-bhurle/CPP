#include <iostream>
#include <istream>
#include <sstream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main()
{
    istringstream str("			Ameya");
    string line;
    getline(str >>ws, line);
 
    cout << line << endl;
 
    
    cout << "b" << ends;
    cout << "c" << endl;
    
    double pi = 3.1425;
    cout << setprecision(3) << pi << endl; 
 
    return 0;
}
