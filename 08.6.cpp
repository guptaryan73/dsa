/*
            n c r function

                    n!
                ___________
                (r!) (n-r)!


*/

/* #include<iostream>
#include<string>
using namespace std;

int ncrcalculator(int n, int r, int multiplier)
{
    int storage1 = 1;
    int storage2 = 1;
    int number3 = n-r;
    int storage3 = 1;
    while (n!=0)
    {
        storage1*=n;
        n --;
    }
    while (r!=0)
    {
        storage2*=r;
        r --;

        // but this approach is wrong as hum ek hi kaam ko repeat kar rahe so humen factorial ka bhi ek alag se function bana lena chahiye
    }

    while (number3!=0)
    {
        storage3*=number3;
        number3 --;
    }

    cout <<storage1/(storage2 * storage3);

}
int main()
{
int n,r;
int multiplier = n-r;
cin >> n >> r;
ncrcalculator(n,r,multiplier);
return 0;
} */

#include <iostream>
#include <string>
using namespace std;

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}

int ncr()
{
    int n, r;
    cin >> n >> r;
    cout << (factorial(n)) / (factorial(r) * factorial(n - r));
}
int main()
{
    ncr();
    return 0;
}
