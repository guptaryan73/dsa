/*
1
2 1
3 2 1
4 3 2 1
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
        while (column <= currentrow) // as triangular oattern ahai so pehli bar mein inner loop ek bar chalega then 2 baar and so on)
        {
            cout << currentrow - column + 1; // jab bhi ulte number print karne hon tab yeh wala method use karna chahiye
            column++;
        }
        cout << endl;
        currentrow++;
    }

    return 0;
}