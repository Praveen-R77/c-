#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {12,21,23,32,54,76,23,8,3,9};
  sort(begin(arr), end(arr));
  auto res = binary_search(begin(arr), end(arr) ,3);
  
  if(res == true)
    
    cout <<"Present \n";
    else
    cout << "Not present \n";
    }
