/* start from 20:00 */
/* a to the power b using recursion */

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
    if (power == 1)
    {
        return base;
    }


    // recursive relation
    return base * calculator(base, power-1);


}
int main()
{
    int base, power;
    cin >> base >> power;
    calculator(base, power);
    return 0;
}