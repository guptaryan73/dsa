/*
A B C
B C D
C D E
*/

/* currentrow+column-1 is the formula for

1 2 3
2 3 4
3 4 5

so we just have to convert this from 123 to ABC

to do this we add 'A' + 1 on both sides like

current row + column -1 + 'A' - 1 = 1 + 'A' - 1
SO current row + column + 'A' - 2 = 'A'
now 1 has been mapped to 'A'
2 has been mapped to 'B' and so on
mapping karne ke liye ek side pe 'A' lana zaruri tha thats why we did 'A' - 1 on both sides so that we get 'A' in the RHS
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

        while (column <= row)
        {

            char ch = 'A' + currentrow + column - 2;
            cout << ch;
            column++;
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}