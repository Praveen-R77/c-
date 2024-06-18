#include <iostream>

using namespace std;

int main()
{
   int x =5;
   int y =10;
   
   cout << "&x =" << &x << endl;
   cout << "&y =" << &y << endl;
   
   int &r = x;
   cout << "&r =" << &r << endl;
   
   cout <<"r =" << r << " x = " << x <<endl;
   
   r=y;
   cout <<"r = " << r << "x = " << x <<endl;
   
   cout << "&r =" << &r << "y ="<< y <<endl;
   return 0;
   }
