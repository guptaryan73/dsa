/* Search In Rotated Sorted Array */

/*
e.g. 79123 , here  we will first find pivot element and then dekhenge , agar desired element pivoto se right wali section mein hoga then us section mein binary search laga denge i.e 1,2,3 and agar dusri wali section mein hoga then udhr laga denge i.e. 7,9

if arr[pivot] <= target <= arr[n-1] then binary search 1,2,3 wali side pe laga denge warna 7,9 wali side pe laga denge
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getPivot(vector<int> &arr, int size) // first find pivot element
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start < end) // this makes sure that the loop end when both the start and the end pointer are at the same position
    {
        if (arr[mid] >= arr[0]) // this means that the mid is present in the 7 se 9 wali section
        {
            start = mid + 1; // to go towards mid
        }

        if (arr[mid] < arr[0]) // this means that the mid is present in the 1 se 3 wali section
        {
            end = mid; // to go towards mid and mid-1 mat lena warna wo wapas 1st wali line i.e. 7 se 9 wali section mein chala   jayega
        }
        mid = start + ((end - start) / 2);
    }
    return start; // can also return end
}

int binarySearch(vector<int> &arr, int start, int end, int key)
{
    // int start = start;
    // int end = end;
    int mid = (start + end) / 2; // should write as start + (end - start)/2 in case start and end ki value kafi badi hain and     start+end int ki range se bahar na ho jaye

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key >= arr[mid]) // right wali side jana padega and yeh karne ke liye start ko current mid ke ek index aage rakh do
        {
            start = mid + 1;
        }

        else // left wali side jana padega and yeh karne ke liye end ko current mid ke ek index piche rakh do
        {
            end = mid - 1;
        }

        // if none of the above conditions

        mid = (start + end) / 2; // mid ko update karna padega as upar ya to start ya to end update hue honge

        // should write as start + (end - start)/2 in case start and end ki value kafi badi hain and start+end int ki range se bahar na ho jaye
    }
    return -1; // when key not found in the whole array
}

int main()
{
    vector<int> arr = {8, 10, 17, 1, 3};
    int size = arr.size();
    int key = 10; // Change this to the key you want to search for
    int pivot = getPivot(arr, size);
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        return binarySearch(arr, pivot, size - 1, 10); // do binary search in right wala part
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, 10); // do binary search in left wala part
    }
    return 0; //
}