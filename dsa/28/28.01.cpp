/* reference variable -> same memory ko 2 or more variables point karte hain */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 5;
    int &j = i; // creating reference variable
    cout << i << endl;
    cout << j << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    return 0;
}