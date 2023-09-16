/* sort 0,1 */

/*
    using 2 pointer approach
    we are trying to put all 0 in left side and all 1 in right side
    leftmost element pe i lelo
    rightmost element pe j lelo

    agar arr[i] pe already 0 pada hai then i++

    ||ly agar arr[j] pe already 0 pada hai then j--

    if arr[i] == 1 && arr[j] == 0 ,then swap arr[i] and arr[j] and do i++ and j--

    and stop the loop when i >= j
 */

#include <iostream>
#include <string>
using namespace std;

void printer(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sorter(int arr[], int size)
{

    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right) // jitne 0 wale hain unhe already left mein kar diya
        {
            left++;
        }

        while (arr[right] == 1 && left < right) // jitne 1 wale the unhein already right mein kar diya
        {
            right--;
        }

        // agar yahan pahunch gye means arr[left] mein 1 pada hua and arr[right] mein 0 pada hua

        if (arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int arr[6] = {0, 1, 0, 0, 1, 1};
    sorter(arr, 6);
    printer(arr, 6);
    return 0;
}