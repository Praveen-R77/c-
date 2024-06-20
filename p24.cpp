#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    int arr[] = {5,1,8,2,6};
    
    int *ptr_i = std::max_element( std::begin(arr) , std::end(arr));
    std::cout <<"The max elements is " << *ptr_i << std::endl;
    std::cout<<"Max elements is at index " << ptr_i - arr << std::endl;
    return 0;
    }                                      
