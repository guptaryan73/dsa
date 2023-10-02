/* 1910. Remove All Occurrences of a Substring */

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() != 0 && s.find(part) < s.length()) // find is and stl function used to find the first occurrence of a substring in a string and humen question mein bhi yahi cheeze puchi hai
        /* while loop mein 2 case ban sakte - 1. ya to string hi khtm hogyi
                                              2. jab pattern asli mein present hai string mein  */
        {
            s.erase(s.find(part), part.length()); // part present hai to use delete kardo
        }
        return s;
    }
};