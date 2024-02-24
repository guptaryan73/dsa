/* row wise and column wise sum print karna hai 2-d array mein */
#include <iostream>
#include <string>
using namespace std;

void rowANDcolSum(int arr[3][4], int row, int column)
{
    // row wise sum
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int column = 0; column < 4; column++)
        {
            sum += arr[row][column];
        }
        cout << sum << endl;
    }
    // column wise sum
    for (int column = 0; column < 4; column++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][column];
        }
        cout << sum << endl;
    }
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

    rowANDcolSum(arr, 3, 4);

    return 0;
}
