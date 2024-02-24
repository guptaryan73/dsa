/* searching an element in the 2-d array */
#include <iostream>
#include <string>
using namespace std;
bool isPresent(int arr[3][4], int target, int row, int column)
{
    for (int column = 0; column < 3; column++)
    {
        for (int row = 0; row < 4; row++)
        {
            if (arr[column][row] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cin >> arr[row][column];
        }
    }

    for (int column = 0; column < 3; column++)
    {
        for (int row = 0; row < 4; row++)
        {
            cout << arr[column][row];
        }
    }

    cout << "enter to be searched element in the 2-d array" << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "found " << target << endl;
    }
    else
    {
        cout << " not found " << target << endl;
    }

    return 0;
}
