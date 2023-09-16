/*
A
BB
CCC
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row;
    cin >> row;

    int currentrow = 1;
    char ch = 'A';

    while (currentrow <= row)
    {
        int column = 1;

        while (column <= currentrow) // currentrow as utni bar hi run hora jitna current row ka number hai i.e. row one mein ek characetr hai, row 2 mein 2 characters hain and so on
        {
            cout << ch; // or we can use 'A' + row - 1
            column++;
        }
        ch++;
        cout << endl;
        currentrow++;
    }
    return 0;
}