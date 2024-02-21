/* pointers with character arrays */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[10] = "hello";
    cout << arr << endl
         << ch << endl; // array ke case mein first element ka address print hoga and string ke case mein wo string hi print hoga
    char *c = &ch[0];

    cout << c << endl; //  prints entire string

    char temp = 'z';
    char *point = &temp;
    cout << point << endl;
    return 0;
}