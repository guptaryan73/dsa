/* bubble sort */
#include <iostream>
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // loop for round 1 to n-1
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) // n-i as har round kar sath array ke last wale elements sort hote jayenga and so unhe
        // bar bar har round mein compare karne ki zarurat nahi, so each round runds for n-i th index, so it keeps on decreasing over time
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) // means agar pura array traverse kar liya comparisons ke sath and ek bhi swap nahi hua then it means ki array sort ho chuka hai and aage aage aur rounds chalane ki zarurat nahi
        {
            break;
        }
    }
}