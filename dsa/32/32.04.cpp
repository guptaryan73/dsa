/* e.g. 412 ->  "four one two" */

#include <iostream>
#include <string>
using namespace std;

int spellOut(int number, string numbersToNames[])
{
    // base case - > number == 0 hogya
    if (number == 0)
    {
        return 0;
    }

    // processing
    int digit = number % 10;
    number/=10;

    // recursive relation
    spellOut(number, numbersToNames);
    cout << numbersToNames[digit] << endl;
}
int main()
{
    string numbersToNames[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // we stored the name of each digit from 0 to 9 in a char type array. we can use the index in the array to find the name of the corresponding digit
    int number;
    cin >> number;
    spellOut(number, numbersToNames); // we also pass the digits ke name wala arrat to the function
    return 0;
}