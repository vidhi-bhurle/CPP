#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
   char* Name;
   int Student_ID;
   int Fees;
};
int main(){
   Student s1;
   s1.Name="Ameya";
   s1.Student_ID=50;
   s1.Fees=111000;
   
   ofstream file1;
   file1.open("Student.txt", ios::app);
   file1.write((char*)&s1,sizeof(s1));
   file1.close();
   
   ifstream file2;
   file2.open("Student.txt",ios::in);
   file2.read((char*)&s1,sizeof(s1));
   cout << "\nName :" << s1.Name;
   cout << "\nStudent ID :" << s1.Student_ID;
   cout << "\nFees : " << s1.Fees;
   file2.close();
   return 0;
}
