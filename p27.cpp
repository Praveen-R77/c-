#include <algorithm>
#include <iostream>
#include <string> 

///Selection sort.
//5,1,8,2,6
//5,1,6,2,8

int main()
{

  int arr[] = {5,1,8,2,6};
  int n = sizeof(arr) / sizeof(int);
  
  int *ptr_i =std::max_element( std::begin(arr) , std::end(arr));
  std::swap(*ptr_i, arr[n - 1]);
  
  return 0;
  
  }
