/* double pointers */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    int *ptr1 = &i;
    int **ptr2 = &ptr1; // double pointer - pointer ko point karna wala pointer

    cout << ptr1 << endl;
    cout << &ptr1 << endl;
    cout << *ptr1 << endl;
    cout << &ptr1 << endl;

    // 3 ways to print i

    cout << i << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;


    // 3 ways to print ptr1

    cout << &i << endl;
    cout << ptr1 << endl;
    cout << *ptr2 << endl;

 // 2 ways to print address of ptr1

    cout << &ptr1 << endl;
    
    cout << ptr2 << endl;

    return 0;
}