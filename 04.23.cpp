/* 1 2 3 4
     2 3 4
       3 4
         4 */

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int currentrow = 1;
    int front = currentrow;
    while (currentrow <= row)
    {

        int space = currentrow - 1; // as spaces in each row = total row - currentrow (using observation)
        while (space > 0)           // row mein loop utni bar hi chana chahiye jitni bar space hai
        {
            cout << " "; // printing space
            space--;
        }
        int column = 1;
        while (column <= row - currentrow + 1)
        {
            cout << front + column - 1;
            column++;
        }
        front++;
        cout << endl;
        currentrow++;
    }
    return 0;
}