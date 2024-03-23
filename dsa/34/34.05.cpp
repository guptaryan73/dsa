/* bubble sort using recursion */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sortArray(int arr[], int size)
{
    // base case - already sorted

    if (size == 0 || size == 1)
    {
        return 1;
    }

    // 1 case solve kar liya, baki recursion sambhal lega
    // largest element ko array ke end pe rakh dega in each round
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive call
    return sortArray(arr, size - 1);
}
int main()
{
    int arr[5] = {1, 4, 2, 3, 5};
    sortArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}