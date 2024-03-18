/* start from 30:00 */
/* binary search using recursion */

#include <iostream>
#include <string>
using namespace std;

bool binarySearch(int arr[], int size, int numberToBeSearched)
{

}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int numberToBeSearched;
    cin >> numberToBeSearched;
    if (binarySearch(arr + 1, 5, numberToBeSearched))
    {
        cout << "mil gya" << endl;
    }
    else
    {
        cout << "nahin mila" << endl;
    }
    return 0;
}
