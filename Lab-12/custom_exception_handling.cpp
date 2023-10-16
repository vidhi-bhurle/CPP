#include <iostream>
using namespace std;
class Test1{
   char* str;
   public:
      Test1(char* str){
         try{
            if (str == "Hello"){
               throw "Exception! String cannot be 'Hello'!";
            }
            this->str = str;   
         }
         catch(const char* s) {
            cout << s << endl;
         }
      }
};

int main() {
   Test1 t("Hello");
   return 0;
}
