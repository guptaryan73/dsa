/*
123
456
789

as such koi pattern nahi dikhra so ek counter le lenge ans usko dono loops ke liye increment karke print karte jayenge
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
        while (column <= row)
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