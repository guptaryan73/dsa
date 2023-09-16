/*

1 1 1
2 2 2
3 3 3

*/

/*
1. row = 3
2. har row mein row ka number hi rikha hua
3. kitni bar print hori -> 3 bar i.e. column = row
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
        int column = 1; // column ko humne 1 se shuru kar na hai and tab tak chalana hai jab tak column <=row
        while (column <= row)
        {
            cout << currentrow;
            column++;
        }
        cout << endl;
        currentrow++;
    }

    return 0;
}