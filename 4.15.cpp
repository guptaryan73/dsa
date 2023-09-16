/*

A
B C
C D E
D E F G

the realtion here for vertical change in A B C D will be A + currentrow + column - 2 as row and column are both changing
*/

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int currentrow = 1;
    while (currentrow <= row)
    {
        int column = 1;

        while (column <= currentrow)
        {
            char ch = 'A' + currentrow + column - 2;
            cout << ch;
            column = column + 1;
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}
