/* even odd function */

#include <iostream>
#include <string>
using namespace std;

bool evenoddchecker(int shonty) // return 1 if the number is even an 0 if the number is odd
{
    if (shonty & 1) // agar kisi number ka &1 true ho then wo number odd hota hai
    {
        cout << "odd";
    }
    cout << "even"; // if number odd nahi hoga to even hi hoga
}
int main()
{
    int number;
    cin >> number;
    evenoddchecker(number);
    return 0;
}