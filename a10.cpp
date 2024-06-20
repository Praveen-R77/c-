//upper and lower
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
   int arr[] ={12,21,23,32,54,76,23,8,3,9};
   for_each(begin(arr), end(arr),[](int ele){cout << ele <<" " ;});
   auto res = binary_search(begin(arr), end(arr) ,3);
   
   cout <<"Present \n";
   int *ptr = std::Lower_bound(begin(arr),end(arr),23);
   cout << " Lower Bound : " << distance(arr ,ptr) << endl;
   ptr = upper_bound(begin(arr),end(arr),23);
   cout<<"Upper Bound : " << distance(arr , ptr) << endl;
   
   } 
