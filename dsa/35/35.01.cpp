/* continue from 15:00 */

/* merge sort using recursion - approach 1 - create new sub-arrays and copy values and then merge those sorted sub-arrays together
space complexity - O(n)
time complexity - O(n  logn) */

#include <iostream>
#include <string>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;
    int lengthOfFirstSubArray = mid - start + 1;
    int lengthOfSecondSubArray = end - mid;

    int *newSubArray1 = new int[lengthOfFirstSubArray];
    int *newSubArray2 = new int[lengthOfSecondSubArray];

    // copy values from the main array to the 2 smaller created sub-arrays

    // for the first sub-array

    int mainArrayIndex = start;
    for (int i = 0; i < lengthOfFirstSubArray; i++)
    {
        newSubArray1[i] = arr[mainArrayIndex++];
    }

    // for the second sub-array

    mainArrayIndex = mid + 1;
    for (int i = 0; i < lengthOfSecondSubArray; i++)
    {
        newSubArray2[i] = arr[mainArrayIndex++];
    }

    // now merge the 2 sub-arrays sorted arrays together
    int indexOfFirstSubArray = 0, indexOfSecondSubArray = 0;
    mainArrayIndex = start;

    while (indexOfFirstSubArray < lengthOfFirstSubArray && indexOfSecondSubArray < lengthOfSecondSubArray)
    {
        if (newSubArray1[indexOfFirstSubArray] < newSubArray2[indexOfSecondSubArray])
        {
            arr[mainArrayIndex++] = newSubArray1[indexOfFirstSubArray++];
        }
        else
        {
            arr[mainArrayIndex++] = newSubArray2[indexOfSecondSubArray++];
        }
    }

    // dono sub-arrays ko alag alag bhi check karna padega
    while (indexOfFirstSubArray < lengthOfFirstSubArray)
    {
        arr[mainArrayIndex++] = newSubArray1[indexOfFirstSubArray++];
    }

    while (indexOfSecondSubArray < lengthOfSecondSubArray)
    {
        arr[mainArrayIndex++] = newSubArray2[indexOfSecondSubArray++];
    }

    delete[] newSubArray1;
    delete[] newSubArray2;
}
void mergeSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;

    // left part sort karna hai
    mergeSort(arr, start, mid);

    // right part sort karna hai
    mergeSort(arr, mid + 1, end);

    // merge
    merge(arr, start, end);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};             // Initialize the array properly
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    mergeSort(arr, 0, size - 1);

    // Print the sorted array

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
