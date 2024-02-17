/* copying a pointer */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    int *q = p;
    cout << p << "\n"<< *p << "\n"<< q << "\n"<< *q;
    return 0;
}