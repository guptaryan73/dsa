/*

1
23
345
4567

start hamesha row number ka barabar hi number hai and har row mein utni hi number print hore jitna row number hai

*/

/* solving same question using different method (i.e. without using int value)*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int currentrow = 1;
    while (currentrow <= row)
    {
        int column = currentrow;
        while (column < 2 * currentrow)
        {
            cout << column << " ";
            column++;
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}