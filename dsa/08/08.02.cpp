/* calculator */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number1, number2;
    cin >> number1 >> number2;
    char operator1;
    cin >> operator1;
    switch (operator1)
    {
    case '+':
        cout << number1 + number2;
        break;
    case '-':
        cout << number1 - number2;
        break;
    case '*':
        cout << number1 * number2;
        break;
    case '/':
        cout << number1 / number2;
        break;
    case '%':
        cout << number1 % number2;
        break;

    default:
        cout << "Invalid operator";
        break;
    }
    return 0;
}