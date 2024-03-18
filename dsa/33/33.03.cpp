/* linear search using recursion */

#include <iostream>
#include <string>
using namespace std;

bool linearSearch(int arr[], int size, int numberToBeSearched)
{
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == numberToBeSearched)
    {
        return true;
    }
    return linearSearch(arr + 1, size - 1, numberToBeSearched);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int numberToBeSearched;
    cin >> numberToBeSearched;
    if (linearSearch(arr + 1, 5, numberToBeSearched))
    {
        cout << "mil gya" << endl;
    }
    else
    {
        cout << "nahin mila" << endl;
    }
    return 0;
}
