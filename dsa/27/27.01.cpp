/* double pointers */

#include <iostream>
#include <string>
using namespace std;

void update(int **p2)
{
    p2 = p2 + 1;     // case 1 - doesn't work as seen previously
    *p2 = *p2 + 1;   // case 2 - only p1 ki value change hogi
    **p2 = **p2 + 1; // case 3 - onyly i ki value change hogi
}

int main()
{
    int i;
    int *ptr1 = &i;
    int **ptr2 = &ptr1; // double pointer - pointer ko point karna wala pointer

    cout << endl
         << ptr1 << endl;
    cout << &ptr1 << endl;
    cout << *ptr1 << endl;
    cout << &ptr1 << endl
         << endl;

    // 3 ways to print i

    cout << i << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl
         << endl;

    // 3 ways to print ptr1

    cout << &i << endl;
    cout << ptr1 << endl;
    cout << *ptr2 << endl
         << endl;

    update(ptr2);
    // 2 ways to print address of ptr1

    cout << &ptr1 << endl;
    cout << ptr2 << endl
         << endl;

    return 0;
}