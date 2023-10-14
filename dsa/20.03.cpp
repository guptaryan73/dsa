/* 283. Move Zeroes */

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int currentPointerontheLastNonZeroValue = 0; // ek pointer
        for (int i = 0; i < nums.size(); i++) // end tak chala
        {
            if (nums[i] != 0) // if current number 0 hai then ignore, and if current number 0 nahi hai then usko swap karke currrentPointer ko increase karde
            {
                swap(nums[j], nums[currentPointerontheLastNonZeroValue]);
                currentPointer++;
            }
        }
    }
};