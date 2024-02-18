#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[20] = {1, 2, 4, 5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int values[10] = {10, 20, 30};

    values++; // error aayega

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;

    return 0;
}