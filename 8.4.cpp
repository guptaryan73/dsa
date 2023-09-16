/* functions */

/* implement pow (a,b) */

#include <iostream>
#include <string>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;
    int currentvalue = 1;
    for (int i = 0; i < b; i++)
    {
        currentvalue *= a;
    }
    return currentvalue;
}
int main()
{
    /*
    int a,b;
    cin >> a >> b;  we can also input these inside the function
    */
    int answer = power(); // here answer stores the value that is returned from the function and then displays it in the main function
    cout << power() << endl;
    return 0;
}