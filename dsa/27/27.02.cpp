#include <iostream>
#include <string>
using namespace std;
int main()
{
    int first = 1;
    int *ptr = &first;
    cout << (*ptr)++ << endl; // post increment hora so pehle 1 print hoga and then uski value will be updated to 2 inside the memory
    cout << endl;
    return 0;
}
