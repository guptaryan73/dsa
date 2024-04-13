/* https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16 */

#include <bits/stdc++.h>

void solve(string str, string output, int pointer, vector<string> &answer) // pass the answer vector by reference
{
    // base case
    if (pointer >= str.length())
    {
        if (output.length() > 0) // taki empty string bhi answer mein na chala jaye
        {
            answer.push_back(output); // pehle output ko vector mein store karenge then return kar denge
        }
        return;
    }

    // exclude ki call

    solve(str, output, pointer + 1, answer);

    // include ki call

    char CurrentElement = str[pointer];
    output.push_back(CurrentElement);
    solve(str, output, pointer + 1, answer);
}
vector<string> subsequences(string str)
{
    vector<string> answer;
    string output = "";
    int pointer = 0;
    solve(str, output, pointer, answer);
    return answer;
}
