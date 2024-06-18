#include <iostream>

  using namespace std;
  
  void fun(int x)
{       
        cout <<"Integer \n";
}       
 void func(float x)
{       
        cout <<"Float \n";
}       

int main()
{       
        int a=5;
        float f = 6.7;
        double d = 6.5;
        func(a);
        func(f);
        func(d);
}                             
