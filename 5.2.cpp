/*

LEFT SHIFT OPERATOR

5<<1

means 5 ko ek bar left shift kardo

5 = 0 0 0 0..... 0 1 0 1 and har ek bit ko left shift kardo
so it becomes 0 0 0 0..... 1 0 1 0 i.e. 10

3<<2

means 3 ko do bar left shift kardo

3 = 0 0 0 0..... 0 0 1 1 and har ek bit ko do bar left shift kardo
so it becomes 0 0 0 0..... 1 1 0 0 i.e. 12


RIGHT SHIFT OPERATOR

5>>2

means 5 ko do bar right shift kardo

5 = 0 0 0 0..... 0 1 0 1 and har ek bit ko 2 bar right shift kardo

so it becomes 0 0 0 0.....0 0 0 1 i.e. 1


jo right ya left shift karte hue new numbers aayenge (thay are called padding) wo hamesha 0 honge (for +ve numbers)

for -ve number, padding is compiler dependent

*/

#include <iostream>
#include <string>
using namespace std;
int main()
{

    cout << (17 >> 1);
    cout << (17 >> 2);
    cout << (19 << 1);
    cout << (21 << 2);

    return 0;
}
