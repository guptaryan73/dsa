/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

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
        int start = 1;
        int finish = row;
        int column = 1;

        // printing pehla triangle

        while (column <= row - currentrow + 1)
        {
            cout << start;
            start++;
            column++;
        }

        // printing stars

        int star1 = 1;
        while (star1 <= (2 * currentrow) - 2)
        {
            cout << "*";
            star1++;
        }

        // printing second triangle

        int number = row - currentrow + 1;
        while (number >= 1)
        {
            cout << number;
            number--;
        }

        cout << endl;
        currentrow++;
    }

    return 0;
}