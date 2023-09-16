/*
1
23
456
78910
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int currentrow = 1;
    int counting = 1;
    while (currentrow <= row)
    {
        int column = 1;
        while (column <= currentrow)
        {
            cout << counting;
            column++;
            counting++;
        }
        cout << endl;
        currentrow++;
    }

    return 0;
}