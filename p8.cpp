#include <iostream>

using namespace std;

void update(int *ptr)
{
    cout << "ptr =" << ptr << endl;
   (*ptr)++;
   cout << "ptr =" << ptr << endl;
 }
 
 int main()
 {
    int x = 5;
     cout << "&x =" << &x << endl;
    update( &x );
    cout << "Main x =" <<x;
    return 0;
    }
