#include <algorithm>
#include <iostream>
using namespace std;  
int main()
{
    int arr[] = {3, 5, 1, 2, 4};
  
    sort(arr, arr+5);
  
    for (int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
  
     
  
    return 0;
}
