/*

quick sort using recursion

space complexity - O(n)
average and best case time complexity - O(nlog(n))
worst case time compexity - O(n squared)

where n is the size of the array

*/

#include <iostream>
#include <string>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int numbersSmallerthanPivot = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            numbersSmallerthanPivot++;
        }
    }
    // place pivot element at its right position in the array
    int correctIndexForPivot = start + numbersSmallerthanPivot;
    swap(arr[start], arr[correctIndexForPivot]);

    // ab is pivot element ke left mein sab element isse chite wale hi hon and right side mein isse bade wale hi hon

    int i = start, j = end;
    while (i < correctIndexForPivot && j > correctIndexForPivot)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < correctIndexForPivot && j > correctIndexForPivot) // in this case,pivot ke left mein koi bada element pada hai at index i and pivot ke right mein koi chota element pada hai at index j, so in dono positions ke elements ko swap kara denge
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return correctIndexForPivot;
}
int quicksort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return 1;
    }

    // partition karenge
    int correctPositionkaIndex = partition(arr, start, end);

    // left part sort karenge
    quicksort(arr, start, correctPositionkaIndex - 1);

    // right part sort karenge
    quicksort(arr, correctPositionkaIndex + 1, end);
}
int main()
{
    int arr[5] = {3, 4, 2, 1, 8};
    int size = 5;
    quicksort(arr, 0, 4);

    // sorted array ko print karwa liya
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}