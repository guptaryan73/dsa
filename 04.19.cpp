/*

4 space
3 space
2 space
1 space

OR

x x x x
x x x
x x
x          // like this

as we can see stars in each row = row - currentrow + 1
ege 2nd row mein stars will be 4 - 2 + 1 = 3

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
        while (column <= row - currentrow + 1)
        {
            cout << "*";
            column++;
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}