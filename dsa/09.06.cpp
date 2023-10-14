/* linear search */

#include <iostream>
#include <string>
using namespace std;

bool binarySearch(int arr[], int size)
{
    int shonty;
    cin >> shonty;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == shonty)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    int array_num[100] = {0, 1, -2, 3, 4, 5, 6, 7};

    // whether a particular number is present in the array or not

    if (binarySearch(array_num, 8))
    {
        cout << "present";
    }
    else
    {
        cout << "not present" << endl;
    }

    return 0;
}