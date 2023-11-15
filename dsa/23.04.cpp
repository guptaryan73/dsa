
/* largest rowSum and rowNumber */

#include <iostream>
#include <string>
using namespace std;
int largestRowSum(int arr[3][3], int row, int column)
{
    int maxi = INT_MIN;
    int maxRowNum = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int column = 0; column < 3; column++)
        {
            sum += arr[row][column];
        }
        if (sum > maxi)
        {
            maxi = sum;
            maxRowNum = row;
        }
    }
    cout << "maxi: " << maxi << endl;
    return maxRowNum;
}
int main()
{
    int arr[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cin >> arr[row][column];
        }
    }

    for (int column = 0; column < 3; column++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout << arr[column][row];
        }
    }
    cout << endl;

    cout << "max row is " << largestRowSum(arr, 3, 3) << endl;
    return 0;
}