/* find pivot in an array */

/* e.g. 7 9 1 2 3 is a pivoted and sorted array in which either 1 or 9 is the pivot element
here we are solving by considering 1 as the pivot element */

/* so here we can see that pivot element wahi hoga jo is array ki minimum value hogi*/

#include <iostream>
#include <string>
using namespace std;
int getPivot(int arr[], int size)
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
            end = mid; // to go towards mid and mid-1 mat lena warna wo wapas 1st wali line i.e. 7 se 9 wali section mein chala jayega
        }
        mid = start + ((end - start) / 2);
    }
    return start; // can also return end
}
int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
    return 0;
}
