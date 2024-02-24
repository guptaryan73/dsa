/*
       1
     2 3
   4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int currentrow = 1;
    int counter = 1;
    while (currentrow <= row)
    {

        int space = row - currentrow + 1; // as spaces in each row = total row - currentrow (using observation)
        while (space > 1)                 // row mein loop utni bar hi chana chahiye jitni bar space hai
        {
            cout << " "; // printing space
            space--;
        }
        int column = 1;
        while (column <= currentrow)
        {
            cout << counter;
            column++;
            counter++;
        }

        cout << endl;
        currentrow++;
    }
    return 0;
}