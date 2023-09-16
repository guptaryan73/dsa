/*
1
22
333
4444
*/

#include <iostream>
#include <string>
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
            cout << currentrow;
            column++;
        }
        cout << endl;
        currentrow++;
    }

    return 0;
}