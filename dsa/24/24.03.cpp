

/* GCD */

/* euclid algo states that gcd(a,b) = gcd (a%b,b) or (a-b,b) jab tak dono mein se ek arguement 0 na ho jaye*/

#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        if (a < b)
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << " gcd of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}

/* lcm(a,b) * gcd(a,b) = a * b  */