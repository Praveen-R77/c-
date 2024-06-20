//ascensing order
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
     int arr[] = { 2 , 4, 6, 0, 1, 8, 3 };
     int n = sizeof (arr)  / sizeof (int);
     
     cout <<"Before sorting \n";
     for(int ele : arr )
     cout << ele << " ";
     
     sort(arr, arr + n );
     
     cout << "\nAfter sorting \n";
     for( int ele : arr)
     
     cout << ele << " " ;
     
     return 0;
     
     }
