/* factorial using recursion */

#include <iostream>
#include <string>
using namespace std;
int factorial(int n)
{
    // base case
    if (n == 0) // as 0! = 1
    {
        return 1; // base case mein hamesha return likhna hota hai
    }

    /*

    int choti_problem = factorial(n - 1);
    int badi_problem = n * choti_problem;
    return badi_problem;

    */

    // or

    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int answer = factorial(n);
    cout << answer << endl;
    return 0;
}