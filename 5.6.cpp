// prime number

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number;
    cin >> number;

    bool is_prime = 1;
    // consider the bool is true at first

    for (int i = 2; i <= number - 1; i++)
    {

        if (number % 2 == 0)
        {
            cout << "not prime" << endl;
            is_prime = false; // or 0
            break;
        }
    }

    if (is_prime == true)
    {
        cout << "prime" << endl;
    }

    return 0;
}