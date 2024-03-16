/* 2 ki power using recursion */

#include <iostream>
#include <string>
using namespace std;
int two_ki_power(int power)
{
    // base case
    if (power == 0)
    {
        return 1;
    }
    // recursive relation
    return 2 * two_ki_power(power - 1);
}
int main()
{
    int power;
    cin >> power;
    cout<<two_ki_power(power);
    return 0;
}