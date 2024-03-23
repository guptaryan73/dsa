/* a to the power b using recursion - optimised method

a to the power b -> where b is even -> (a raised to b/2) multiplied to (a raised to b/2)
a to the power b -> where b is odd -> (a) multiplied to (a raised to b/2) multiplied to (a raised to b/2)

*/

#include <iostream>
#include <string>
using namespace std;

int calculator(int base, int power)
{
    // base cases
    if (base == 1 || power == 0)
    {
        return 1;
    }
    else if (base == 0)
    {
        return 0;
    }
    else if (power == 1)
    {
        return base;
    }

    // recursive relation
    int answer = calculator(base, power / 2);

    // conditional statements
    if (power % 2 == 0) // power is even
    { 
        return answer * answer;
    }
    else // power is odd
    { 
        return base * answer * answer;
    }
}

int main()
{
    int base, power;
    cin >> base >> power;
    cout << calculator(base, power);
    return 0;
}
