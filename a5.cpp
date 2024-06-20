 // decending 

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool comapare(int a ,int b)

{
  
   return a > b;
   
   }
   
   int main()
   {
   
    int arr[] ={2,4,6,0,1,8,3};
    int n = sizeof (arr) / sizeof (int);
    
    cout <<"Before Sorting \n";
    for(int x : arr )
    cout << x << " " ;
    
    sort(arr , arr + n ,comapare );
    
    cout <<"\nAfter Sorting \n";
    for(int x : arr )
    cout << x << "  ";
    
    return 0;
    
    }

