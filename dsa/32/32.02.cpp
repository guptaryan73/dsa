/* 

fibonacci numbers using recursion

iska recurse function will be like f(n) = f (n-1) + f(n-2)

*/
#include <iostream>
#include <string>
using namespace std;

int fibonacci(int num)
{
    // base case
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    // recursive relation
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << fibonacci(num);
    return 0;
}
