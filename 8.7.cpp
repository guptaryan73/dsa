/* isPrime */

#include <iostream>
#include <string>
using namespace std;

bool isPrime(int number) // 1 means prime, 0 means not prime
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int number;
    cin >> number;
    if (isPrime(number))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }

    return 0;
}