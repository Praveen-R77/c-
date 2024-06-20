#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isprime(int num)
{
   for(int i=2 ; i <= num/2 ; i++)
      if(num % i == 0)
       return false;
       return true;
       }
int main()
{
  int arr[] = {12,21,34,5,65,34,23,43};
  int *ptr = find_if(begin(arr), end(arr), isprime);
  if(ptr == end(arr))
  
  cout << "There are no prime numbers \n";
  else
  cout <<"First prime number is :" <<*ptr << endl;
  return 0;
  }
  
  //prime or not using function
