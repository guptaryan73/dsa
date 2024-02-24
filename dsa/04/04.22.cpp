/*

      1
    2 2
  3 3 3
4 4 4 4

is case mein spaces print karne padenge
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

        int space = row - currentrow; // as spaces in each row = total row - currentrow (using observation)
        while (space > 0)             // row mein loop utni bar hi chana chahiye jitni bar space hai
        {
            cout << " "; // printing space
            space--;
        }
        int column = 1;
        while (column <= currentrow) // har column mein currentrow bar loop chalega and currentrow ke barabar hi star print honge har row mein
        {
            cout << currentrow;
            column++;
        }

        cout << endl;
        currentrow++;
    }
    return 0;
}