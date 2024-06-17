/* https://leetcode.com/problems/letter-combinations-of-a-phone-number/ */
class Solution
{
private:
    void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
    {

        // base case
        if (index >= digit.length())
        {
            ans.push_back(output);
            return;
        }

        int number = digit[index] - '0'; // char se int mein convert karne ke liye  - 0 kiya as digit wale string mein to wo number string form mein hai but is variable mein humen use as an int store karna hai. digit[index] se humen wo place pe jo character hai wo milega and - '0' karne se hum wo char ko number mein convert kar lenge. this is the method to get the interger equivalent from a char

        // ab is obtained number ki mapping pata karni hai mapping wale array se ki is number ke corresponding us mapping mein kya value hai

        string value = mapping[number];

        // ab jo bhi value mapping se aayin in above step, us sake liye recursive call mar deni hai

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]); // Append each character individually
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back(); // Backtrack
        }
    }

public:
    vector<string> letterCombinations(string digits) //  yahan vector <string> likha hai means ki ek vector <string> as the answer expect kar raha hai so will make it below
    {
        vector<string> ans;
        if (digits.length() == 0)
        {

            return ans;
        }
        string output; // ek output string create karlo
        int index = 0;

        // doing mapping between the index of below array and the corresponding characters

        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};