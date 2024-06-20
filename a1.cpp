#include <algorithm>
#include <iostream>
using namespace std;

int mian()
{

 int arr[] ={12,21,23,32,34,43};
 int n = sizeof(arr) / sizeof(int);
 int key;
 cout <<"Enter the element to search : ";
 cin >> key;
 
 int *ptr = find(arr ,arr + n, key);
 if(ptr == arr +n)
 cout << "Element not found \n" ;
 
 else
 {
   int index = ptr -arr;
   cout << "Elements found at index " << index << endl;
   }
   
   return 0;
   
   } //inputlt first, inputlt last
