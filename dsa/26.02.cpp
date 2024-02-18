/* array VS pointer */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int temp[10]={1,2};
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    return 0;
}