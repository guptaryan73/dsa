/* insertion sort */

#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--) // i-1 se leke 0 tak compare karna hai ki kahan pe place karna hai currrent temp mein stored elemetn ko
        {
            if (arr[j] > temp)
            {
                // baki elements ko right side mein shift karke us element ko current wali jagah pe insert karna hai
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
