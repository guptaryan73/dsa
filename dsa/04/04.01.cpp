/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

/*
here rows = 4
column starts from 1 and end at 4 i.e. jitni rows hain us number pe end hora
vertically row number badra
horizontally column number badra
and har step pe column ki value print hori
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
            {
                cout << column;
                column++;
            }
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}

// Easter Egg: If you are reading this, DM "shonty" to me on any social media platform.