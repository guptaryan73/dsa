/* 443. String Compression */ /* IMP */

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        /* if count of a character is more than single difgit e.g. 12 then we cant write like ab12 we have to conver 12 to
        1,2 and then write the answer as a,b,1,2 */
        int i = 0;        // denotes the starting of the character array
        int ansIndex = 0; // alag se new vector nahi banayenge existinng wale mein hi changes karenge

        while (i < chars.size())
        {
            int j = i + 1; // as pichle wale element jo agle wale element se compare karwana hai, jab tak i< char.size(), tab tak kuch mat karo, i jahan currently hai usse aage wale element pe chale jao ans repeat the process
            while (j < chars.size() && chars[i] == chars[j]) // taki hum aaray se bahar na nikal jayen && char[i] == chars[j] i.r. agla character bhi same hai
            {
                j++; // in this case bas aage badte jao
            }
            // we will come out of above while loop only when pura vector traverse kar liya ya new character encountered
            chars[ansIndex++] = chars[i]; // oldChar store kar liya

            int count = j - i; // last occurance of the character - first occurance of the character

            if (count > 1) // given in question that agar count ki value 1 hai then use answer wale string mein nahi dalna
            {
                string cnt = to_string(count); // e.g. int wale 12 jo 1,2 mein divide karke string mein store kar diya using this method and saved it in string
                for (char ch : cnt)
                {
                    chars[ansIndex++] = ch;
                }
                // now old char bhi save kar liya hai and uska count bhi save kar liya hai answer mein so now we can move onto the next character
            }
            i = j; //moving to new character
        }
        return ansIndex; // answer array ka size return karna tha
    }
};