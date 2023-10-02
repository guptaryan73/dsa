/*

1 1 1 1
  2 2 2
    3 3
      4

is case mein spaces print karne padenge
*/

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int counter = row;
    int currentrow = 1;
    while (currentrow <= row)
    {
        int space = currentrow - 1;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        int column = 1;
        while (column <= counter)
        {
            cout << currentrow;
            column++;
        }
        counter--;
        cout << endl;
        currentrow++;
    }
    return 0;
}
