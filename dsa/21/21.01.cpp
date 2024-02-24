/* 189. Rotate Array - ismein mod ka use karenge
e.g. k = 3 then har element ko 3 places aage badhana hai
then e.g. n-1 pe jo element hai usko hum n+2 pe dalna chahte hain
so hum n+2 % n kar denge i.e. = 2 , cause array n-1 index pe khatam ho jata so hum elemnt ko ghumake fir array ke shuru mein daal denge as yahi to karna tha , i.e. array rotate karna tha */

/* arr[i+k]%n = arr[i] --> cyclic way main 'k' position se shift kar dunga - jo normalyy shift ho sakte unhe normally shift kar dega and jinmein aage array mein jagah nahi unhe cyclically shift kar dega */

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp(nums.size()); // nums vector ke size ka ek new temp vector i.e humen ek new vector ki zarurat padegi directly nums wali vector mein nahi kar sakte rotate to avoid overwriting
        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }
        // copying temp ki cheezen wapas into nums
        nums = temp;
    }
};