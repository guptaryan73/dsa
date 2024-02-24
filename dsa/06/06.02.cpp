/*

NOTE: left shift means multiplying a number by 2 and right shift means dividing a number by 2

binary to decimal

1 0 1 0 1

we multiply 2 power 0 , 2 power 1 and so on , so check current bit and jahan current bit 1 hai we consider 2 ki power there and jahan 0 hai we neglect 2 ki power there

int i = 0
1. while n!=0
2. get current bit
    int bit = n & 1
3. if bit = 1
    ans = ans + 2 ki power i;
    i++;
4. else kuch nahi karna as 0 wale case waise bhi consider nahi karne
5. print answer

*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int index = 0;
    int answer = 0;
    int currentdigit;
    int number;
    cin >> number;

    while (number != 0)
    {
        currentdigit = number % 10;
        if (currentdigit == 1)
        {
            answer = answer + pow(2, index);
        }
        number = number / 10; // right shift se number divide hota rahega and kam hota rahega
        index++;
    }
    cout << answer;
    return 0;
}

// agar current bit nikalre to right shift marenge and agar digit nikalre to divide karenge