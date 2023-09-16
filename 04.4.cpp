/*
*
* *
* * *
* * * *

har column mein utne star print hore jitne row number hai
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
        int column = 1;

        while (column <= currentrow) // ye wale loop ko utni baar chalana hai jitna value currrently row ki hai
        {
            cout << "*";
            column++;
        }
        cout << endl;
        currentrow++;
    }
    return 0;
}
