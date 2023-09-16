/*
A B C
A B C
A B C
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row;
    cin >> row;
    char a = 'A';
    int currentrow = 1;

    while (currentrow <= row)
    {
        int column = 1;

        while (column <= row)
        {
            // or relation can be made like 'A' + column - 1
            cout << a;
            column++;
            a++;
        }

        cout << endl;
        currentrow++;
        a = 'A';
    }
    return 0;
};