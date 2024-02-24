/* Print Like A Wave */

/* hum har odd index ke liye upar ja rahe hain and har even index ke liye niche aa rahen hain */

#include <bits/stdc++.h>
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    // har column ke liye iterate karna hai so ek for loop likh lete
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1) // odd index -> bottom to top
        {
            for (int row = nRows - 1; row >= 0; row--) // max row se shuru karke 0 tak jayenge
            {
                ans.push_back(arr[row][col]);
            }
        }
        else //  0 or even index -> top to bottom
        {
            for (int row = 0; row < nRows; row++) // 0 se start karke bhadate jayenge
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}