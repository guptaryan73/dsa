/* pointers and functions */

#include <iostream>
#include <string>
using namespace std;

void printer(int *ptr)
{
    cout << "the value is " << *ptr << endl;
}

void update(int *ptr)
{
    ptr++;
    cout << " after update " << ptr << endl;
    *ptr = *ptr + 1;
}

int main()
{
    int value = 5;
    int *ptr = &value;
    // printer(ptr);
    cout << " before update " << ptr << endl;
    update(ptr);
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}