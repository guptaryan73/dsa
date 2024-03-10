/* creating 2-d array at runtime using dynamic memory allocation */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row, column;
    cin >> row, column;
    int **arr = new int *[row]; // creating multiple rows of arrays which will finally make a 2-d array as this donates an array of size n where each element is an array of size n and of type int * where har pointer ke corresponding ek array bana denge. in this step, int* type ka array create kar liya hai
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[column]; // creating an array on each pointer and har row ke liye multi column dalte jayenge and row X column ka matrix ban jayega
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ab heap memory pe kaam karne ke baad ab us memory ko release bhi karna hai

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
