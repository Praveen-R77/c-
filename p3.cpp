//Demonstrate how to use cout and cin.
#include <iostream>

int main()
{
  int empid =0;
  std::cout << "Enter the employee id : "   ;
  std:: cin >> empid;
  
  std::cout << "Enter the name : ";
  char name[20]; // Flexible variable declaration
  std::cin >> name;
  
  std::cout << "Emp id : "<<empid << std::endl;     
  std::cout << "Emp name : "<<name << std::endl; 
  return 0;
  }     
