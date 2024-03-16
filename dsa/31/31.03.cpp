/* printing counting using recursion */

#include <iostream>
#include <string>
using namespace std;

int counter(int number)
{
    // base case
    if (number == 0)
    {
        return 0;
    }

    cout << number << " " << endl;

    // recursive relation
    return counter(number - 1);

    // to make the order of printing like 1 2 3 4 5, just swap the position of the above 2 lines as this reversed the order of the code excecution
}
int main()
{
    int number;
    cin >> number;
    cout << counter(number);
    return 0;
}