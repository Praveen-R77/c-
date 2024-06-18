#include <iostream>
#include <cmath>

double calarea(double radius){
  
   return 3.14 *radius * radius; 
   }



int main()

  
{
  double radius;
  
  std::cout << "Enter the radius of the circle:";
  std::cin >> radius;
  
  double area = calarea(radius);  
  std::cout << "The area of the circle is:" << area << std::endl;
  
  return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
