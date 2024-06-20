#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
 string str= "PRAVEEN RAJAMOORTHY";
 char key;
 cout << "Enter the elements to search : ";
 cin >> key;
 
 int n_occurances = count(begin(str), end(str), key );
 if(n_occurances == 0)
    cout <<"Element not found \n" ;
    else
    {
    cout<<"Element found " << n_occurances << endl;
    }
    
    return 0;
    }
