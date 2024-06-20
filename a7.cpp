#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int main()
{
   string arr[] ={"Praveen","Dhoni ","markram","buttler"};
   
   cout << "Before sorting \n";
   std::for_each(begin(arr),end(arr),[](string a){ cout << a << " " << a.length() << endl;});
   return 0;
   }
