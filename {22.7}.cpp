/* max. occuring character in a string */

char getMaxOccuringChar(string s)
{
    int arr[26] = {0};
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
    int maxi = -1, ans = 0; // ab us new generated arrray mein se maximum number nikal lenge and that will tell us the cirresponding character jo max baar aaya hai
    for (int i = 0; i < 26; i++) // loop sare 26 characters ke liye chalega
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
        char finalAns = 'a' + ans;
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