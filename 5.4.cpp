/* FOR LOOP */
// counting 1 to n

#include <iostream>
#include <string>
using namespace std;
int main()
{

    int num;
    cin >> num;

    for (int counter = 1; counter <= num; counter++)
    {
        cout << counter << endl;
    }

    // break --> takes you out of the current loop

    // can also put 2 or more variables in one for loop like

    for (int a = 0, b = 1; a > 0 && b >= 1; a--, b--)
    {
        cout << a;
        cout << b;
    }

    return 0;
}