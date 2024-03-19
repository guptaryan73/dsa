/* check palindrome using recursion */

#include <iostream>
#include <string>
using namespace std;
bool palindromeChecker(string word, int start, int end)
{
    // base case

    if (start >= end)
    {
        return false;
    }

    if (word[start] == word[end])
    {
        return true;
    }

    // recursive relation
    return palindromeChecker(word, start + 1, end - 1);
}
int main()
{
    string word;
    cin >> word;
    if (palindromeChecker(word, 0, word.length() - 1))
    {
        cout << "it is a palindrome" << endl;
    }
    else
    {
        cout << "it is not a palindrome" << endl;
    }

    return 0;
}