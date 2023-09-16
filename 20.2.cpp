/* merge 2 sorted arrays */
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> nums3;
        int i = 0, j = 0, k = 0; // donon array ke starting mein ek ek pointer le liya, then compare kar rahe, if i wala element > j, then i wala element ko new merged array mein copy karke i ko aage bhada do, if j wala element > i, then j wala element ko new merged array mein copy karke j ko aage bhada do
        // yahi repeat karo jab tak donon mein se ek array khatam nahi ho jata and then bache hue bigger array ko seedha new merged wale arrar mein copy kardo
        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j])
            {
                nums3[k] = nums1[i];
                k++;
                i++;

                // all of the above 3 lines can be written as nums3[k++] = nums1[i++], ||ly for niche wale similar cases;
            }
            else
            {
                nums3[k] = nums2[j];
                k++;
                j++;
            }
        }
        while (i < n) // case where dusra array khtm hogya and first array ke elements line se copy karne hain third wale new array mein
        {
            nums3[k] = nums1[i];
            k++;
            i++;
        }
        while (j < m) // case where pehla array khtm hogya and dusre array ke elements line se copy karne hain third wale new array mein
        {
            nums3[k] = nums2[j];
            k++;
            j++;
        }
    }
};