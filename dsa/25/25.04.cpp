#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 3;
    int *ptr = &i;

    cout << (*ptr)++ << endl;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // here seedh ptr ko ++ karne ke baad e.g. wo agar 100 pe tha khud to ab 104 pe chala jayega instead of 101 as int 4 bytes leta hai
    
    return 0;
}
