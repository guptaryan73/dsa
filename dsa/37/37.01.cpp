/* power set - https://leetcode.com/problems/subsets/description/ */

/* har iteration mein ke pointer lenge that will traverse over the given array and each iteration mein 2 case banenge i.e. include the currect element on which the pointer is pointing into the result array or exclude it */

class Solution
{
private:
    void powerSetGenerator(vector<int> nums, vector<int> output, int pointer, vector<vector<int>> &answer) // in sabko pass by reference karna hai warna vectos ke copy banke unmein changes hote jayenge and jab return karenge to the main function then kuch bhi change nahin hua hoga in the actual vector
    {
        // base case
        if (pointer >= nums.size())
        {
            // return karane ke phele sub answers ko answer wale vector mein store karana hai
            answer.push_back(output);
            return;
        }

        // exclude wala case - i ko bas aage bhada dena hai

        powerSetGenerator(nums, output, pointer + 1, answer);

        // include wala case - next element ko answer mein include karna hai is round mein
        output.push_back(nums[pointer]);
        powerSetGenerator(nums, output, pointer + 1, answer);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> answer;
        vector<int> output;
        int pointer = 0;
        powerSetGenerator(nums, output, pointer, answer);
        return answer;
    }
};