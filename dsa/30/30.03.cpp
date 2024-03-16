/* inline functions -> usde to reduce the function calls overhead */

#include <iostream>
#include <string>
using namespace std;

inline int getMax(int &a, int &b)
{
    /* if (a > b)
    {
        answer = a;
    }
    else
    {
        answer = b;
    } */

    // this whole above if else wali statement can be rewritten as

    // answer = a > b ? a : b;

    return (a > b) ? a : b;
}

int main()
{
    int a = 1;
    int b = 2;
    int answer = 0;
    answer = getMax(a, b);
    cout << answer << endl;
    a = a + 3;
    b = b + 1;
    answer = getMax(a, b);
    cout << answer << endl;
    return 0;
}