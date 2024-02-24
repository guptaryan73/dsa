/* valid palindrome checker - method 2 */

class Solution
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) // checkeing for valid character
        {
            return 1;
        }
        return 0;
    }
    char toLowerCase(char c) // lower case mein convert karne ke liye kisi bhi character ko in case the palindrome checker is not case sensitive
    {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        {
            return c;
        }
        else // means the character is an upper case character
        {
            char temp = c - 'A' + 'a';
            return temp; // program to turn from uppercase to lower case and agar pehle se hi lowercase hoga then usko waisa hi rehne dega
            // char temp = ch - 'a' + 'A'; ==> for lower case to upper case

            /* char temp = ch - '/0' ==> if we want to convert from string to actual number i.e. from string ka "1" to actual number 1
            string= "1"
            then wo do temp = ch - '/0' and we will get the answer as int ka '1'
    */
        }
    }
    int checkPalindrome(string S)
    {
        int start = 0;
        int end = S.length() - 1;

        while (start <= end)
        {
            if (S[start] != S[end]) // pehle dono character ko lowercase mein convert karna hai and then compare karna hai
            {
                return false;
            }
            start++;
            end--;
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {
        // faltu character hartado
        string temp = " "; // empty string initialise kardi
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        // temp wali string ab aisi new string ban chuki hai jismein se sab non-valid character hat chuke hain. now hum sabko lowercase mein kar denge
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};
