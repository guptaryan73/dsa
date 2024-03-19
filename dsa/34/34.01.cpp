/* reverse string using recursion */

#include <iostream>
#include <string>
using namespace std;
string swapper(string word, int start, int end)
{
    // base case

    if (start > end)
    {
        return word;
    }

    swap(word[start], word[end]);

    // recursive relation
    return swapper(word, start + 1, end - 1);
}
int main()
{
    string word;
    cin >> word;
    cout << swapper(word, 0, word.length() - 1);
    return 0;
}