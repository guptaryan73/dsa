/* stl functions for strings - length , compare , copy */

/* Given a string, remove spaces from it.  */

class Solution
{
public:
    string modify(string s)
    {
        string temp = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            { // Check if the character is not a space
                temp.push_back(s[i]);
            }
        }

        return temp;
    }
};