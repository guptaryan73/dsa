/* PATTERNS */

/*
****
****
****
****
*/

/*

1. row = 4
2. column = number of row i.e. 4 so column = row

*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row;
    cin >> row; // kitne star wala pattern chahiye

    int currentrow = 1; // batayega konsi row presently chalri

    while (currentrow <= row) // ye wala while loop runs for each row
    {
        int column = 1; // har row mein kitne star hain

        while (column <= row) // as column = rows
        {
            cout << " * ";
            column++;
        }
        cout << endl;
        currentrow++;
    }
