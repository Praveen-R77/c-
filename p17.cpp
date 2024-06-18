#include <iostream>
using namespace std;

double calarea(double length, double breadth)
{
  return length * breadth;
  }

int main()
{
  double length ,breadth;
  
  std::cout << "Enter the len of the rectangle : " ;
  std::cin >> length;
  
  std::cout << "Enter the breadth of the rectangle : " ;
  std::cin >> breadth;
  
  
   double area = calarea(length, breadth);
   
   std::cout << " the area of rect is:" << area << std::endl;
   
   return 0;
   }                  
