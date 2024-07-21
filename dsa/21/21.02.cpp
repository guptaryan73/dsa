/* 1752. Check if Array Is Sorted and Rotated */

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0, n = nums.size(); // count batayega ki kitne aise pairs hain jahan nums[i - 1] > nums[i]
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i]) // pura array mein pichle wale element ko aage wale se compare karenge
            {
                count++;
            }
        } // is wale loop se sidhe wale line se comparison ho gaye honge but humen cyclic comparison bhi karna hai last element se the cycle marke first element pe jayenge

        if (nums[n - 1] > nums[0]) // if last element bada hai first element se
        {
            count++;
        }
        return count <= 1; // agar count == 1 ya == 0 hoga then return true else return false
        // count<=1 se wo edge case counter ho jayega where all the values in the array are equal as wahan pe koi bhi aisa paor nahi hoga jiske liye nums[i - 1] > nums[i] and so count == o for tht case
    }
};