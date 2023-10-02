/* reverse the array/string */

class Solution
{
public:
    string reverseWord(string str)
    {
        int start = 0;
        int end = str.size() - 1;
        while (start <= end)
        {
            swap(str[start], str[end]);
            start++;
            end--;
        }
        return str;
    }
};
