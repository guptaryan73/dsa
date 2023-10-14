/*
A B C
D E F
G H I
*/

/* as we can see counting hi chalri hai starting from A */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row;
    cin >> row;
    char currentchar = 'A';
    int currentrow = 1;

    while (currentrow <= row)
    {
        int column = 1;

        while (column <= row)
        {
            // or relation can be made like 'A' + column - 1
            cout << currentchar;
            column++;
            currentchar++;
        }

        cout << endl;
        currentrow++;
    }
    return 0;
}
