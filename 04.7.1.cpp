/*

1
23
345
4567

start hamesha row number ka barabar hi number hai and har row mein utni hi number print hore jitna row number hai
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
        int value = currentrow; // Reset value for the next row
        while (column <= currentrow)
        {
            cout << value;
            value++;
            column++;
        }
        cout << endl;
        currentrow++;
    }

    return 0;
}
