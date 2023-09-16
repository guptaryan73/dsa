class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            }

            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) // pehle dono character ko lowercase mein convert karna hai and then compare karna hai
            {
                return false;
            }

            start++;
            end--;
        }
        return 1;
    }
};
