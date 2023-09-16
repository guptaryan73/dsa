/* doing 4.12 wala question using 4.16 ke starting character wali approach */

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int currentrow = 0;
    while (currentrow < row)
    {
        int column = 1;
        char ch = 'A' + currentrow; // starting character for each row ka formula bana liya
        while (column <= row)
        {
            cout << ch; // then us starting charcter ko print karke increment karte gaye jitni bhi bar bola hai
            ch++;
            column++;
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}