/*
A A A
B B B
C C C
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row;
    cin >> row;
    char a = 'A';
    int currentrow = 1;

    while (currentrow <= row)
    {
        int column = 1;

        while (column <= row)
        {
            cout << a; // or can do char ch = 'A' + currentrow -1 , then cout<<ch;
            column++;
        }
        a++; //
        cout << endl;
        currentrow++;
    }
    return 0;
};
