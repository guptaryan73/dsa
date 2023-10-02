/*
    321
    321
    321

    idhr 1 wali place pe column = 3 , 2 wali place pe column = 2, 3 wali place pe column = 1
    so column ki jagah pe usse ulti calue print hori so we use row-column+1  // V_IMP
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
                cout << row - column + 1;
                column++;
            }
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}