/*
D
C D
B C D
A B C D

using trial and error to get the formula (formula mein A aayega hi aayega as usi se to shuru karna hai)
e.g. for the starting character of each row
==> A + row - current row

from this we will get the starting cahracter of each row i.e. DCBA
and har row mein isi ko increment karte jana hai
e.g. for 2nd row
A + 4(row)- 2(currentrow) i.e. C
so firt character aa gya
and then isi C ko increment karte jana hai to us row ke next wale character aate jayenge
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
        char ch = 'A' + row - currentrow;
        while (column <= currentrow)
        {
            cout << ch;
            ch++;
            column++;
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}