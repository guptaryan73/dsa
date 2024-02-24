/* to find the address of the first element of the array using pointer as array ka name array ke first element ki location ke address ko hi point karta hai */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[10] = {2, 5, 6, 9};
    cout << "address of first memory block is " << arr << endl;
    // or
    cout << "address of first memory block is " << &arr[0] << endl;
    cout << "value is " << *arr << endl;
    cout << "value is " << *arr + 1 << endl;
    cout << "value is " << *(arr + 1) << endl;
    cout << "value is " << *(arr) + 1 << endl;
    cout << "value is " << arr[2] << endl;
    cout << "value is " << *(arr + 2) << endl; // same as above statement so arr[i] = *(arr+i)

    return 0;
}