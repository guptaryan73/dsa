/* max. occuring character in a string */

char getMaxOccuringChar(string s)
{
    int arr[26] = {0}; // array in which 'a' se leke 'z' tak are mapped with '0' se leke '25' tak and the value at each index is count of that character in the string
    // create an array of count of each character
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z') // lowercase character
        {
            number = ch - 'a';
        }
        else // the character is upercase
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    // find max occuring character
    int maxi = -1, ans = 0;      // ab us new generated arrray mein se maximum number nikal lenge and that will tell us the cirresponding character jo max baar aaya hai
    for (int i = 0; i < 26; i++) // loop sare 26 characters ke liye chalega
    {
        if (maxi < arr[i])
        {
            ans = i; // max wale ka index store karlo ans mein
            maxi = arr[i];
        }
        char finalAns = 'a' + ans; // to get the actual char stored at that index
        return finalAns;

        maxi = max(maxi, arr[i]);
    }
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << getMaxOccuringChar(s) << endl;
    return 0;
}