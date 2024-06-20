#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  int arr[] ={5,1,8,2,6};
  int n = sizeof(arr) / sizeof(int);
  
  int res = std::count( std::begin(arr) , std::end(arr) , 1);
  std::cout << res << std::endl;
  
  return 0;
  }
