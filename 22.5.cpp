/* valid palindrome checker */

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
            if (!isalnum(s[start])) // jo alphanumeric characters nahi hain unhe hatane ke liye
            {
                start++;
                continue;
            }

            if (!isalnum(s[end])) // jo alphanumeric characters nahi hain unhe hatane ke liye
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) // pehle dono character ko lowercase mein convert karna hai and then compare karna hai (here tolower is a predefined stl function used to lower Uppercase characters)
            {
                return false;
            }

            start++;
            end--;
        }
        return 1;
    }
};
