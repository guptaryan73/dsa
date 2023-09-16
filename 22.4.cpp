/* check palindrome */

char toLowerCase(char c) // lower case mein convert karne ke liye kisi bhi character ko in case the palindrome checker is not case sensitive
{
    if (c >= 'a' && c <= 'z')
    {
        return c;
    }
    else // means the character is an upper case character
    {
        char temp = ch - 'A' + 'a';
        return temp; // program to turn from uppercase to lower case and agar pehle se hi lowercase hoga then usko waisa hi rehne dega
        // char temp = ch - 'a' + 'A'; ==> for lower case to upper case

        /* char temp = ch - '/0' ==> if we want to convert from string to actual number i.e. from string ka "1" to actual number 1
        string= "1"
        then wo do temp = ch - '/0' and we will get the answer as int ka '1'
*/
    }
}
int isPalindrome(string S)
{
    int start = 0;
    int end = S.length() - 1;

    while (start <= end)
    {
        if (toLowerCase(S[start]) != toLowerCase(S[end])) // pehle dono character ko lowercase mein convert karna hai and then compare karna hai
        {
            return false;
        }
        start++;
        end--;
    }
    return 1;
}