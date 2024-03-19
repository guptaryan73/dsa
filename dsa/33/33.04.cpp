/* binary search using recursion */

#include <iostream>
#include <string>
using namespace std;

void printer(int arr[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
bool binarySearch(int arr[], int start, int end, int numberToBeSearched)
{

    printer(arr, start, end);

    // base case 1 -> element not found

    if (start > end)
    {
        return false;
    }
    int mid = start + ((end - start) / 2);

    // base case 2 -> element found

    if (arr[mid] == numberToBeSearched)
    {
        return true;
    }

    if (numberToBeSearched > arr[mid])
    {
        return binarySearch(arr, mid + 1, end, numberToBeSearched);
    }
    else if (numberToBeSearched < arr[mid])
    {
        return binarySearch(arr, start, mid - 1, numberToBeSearched);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int numberToBeSearched;
    cin >> numberToBeSearched;
    if (binarySearch(arr, 0, 4, numberToBeSearched))
    {
        cout << "mil gya" << endl;
    }
    else
    {
        cout << "nahin mila" << endl;
    }
    return 0;
}
