/* 567. Permutation in String */

/* using sliding window concept here */
class Solution
{
private:
    bool checkEqual(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    // character count array
    {
        int count1[26] = {0};                 // count store karan ke liye for sare character
        for (int i = 0; i < s1.length(); i++) // bade wale string mein traverse karre
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }
    }

    // traverse s2 string in window of size s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    // running for pehli window only
    while (i < windowSize && i < s2.length()) // 2 conditions: window mein ja sakte ya nahi && aisi to nahi ki hum string se hi bahar chale jayen
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return true;
    }

    // else window ko aage slide crow

    while (i < s2.length())
    {
        // count mein se purana wala element remove kar denge and new wala add kar denge i.e sliding the window
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if (checkEqual(count1, count2))
        {
            return true;
        }
    }
    return false;
};