/* selection sort - har ek cycle mein remaining array ka smallest element selecg karo and usko right jagah place kardo */

#include <bits/stdc++ .h>
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; /* consider kar ki already jahan pe hain wo minimun hain
        and agar aage jake aur minimum element milta hai to swap kar dena */
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                swap(arr[minIndex], arr[j]);
            }
        }
    }
}