/* 2-D arrays */

/* to convert 2-d array to 1-d array, we use the formula
total columns * current row + current column  */

/* create 2-D array*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // taking input -> row wise
    int arr[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cin >> arr[row][column];
        }
    }

    /* taking input->column wise int arr[3][4];
    for (int column = 0; column < 4; column++)
    {
        for (int column = 0; column < 3; column++)
        {
            cin >> arr[row][column];
        }
    }
    */

    // printing

    for (int column = 0; column < 3; column++)
    {
        for (int row = 0; row < 4; row++)
        {
            cout << arr[column][row];
        }
    }

    /* hard coding the 2-d array */

    int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int column = 0; column < 3; column++)
    {
        for (int row = 0; row < 4; row++)
        {
            cout << arr2[column][row];
        }
    }

    // if we want more control over which elements in which row

    int arr3[3][4] = {{1, 2, 3, 4},{ 5, 6, 7, 8}, {9, 10, 11, 12}};

    for (int column = 0; column < 3; column++)
    {
        for (int row = 0; row < 4; row++)
        {
            cout << arr3[column][row];
        }
    }

    return 0;
}
