/* sum of an array using recursion */

#include <iostream>
#include <string>
using namespace std;

int getSum(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    return arr[0] + getSum(arr + 1, size - 1); // Add the current element to the sum before making the recursive call
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << getSum(arr, 5);
    return 0;
}