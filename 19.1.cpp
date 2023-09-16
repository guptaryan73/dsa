/* STL */

/* array in stl (it is static) */

#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4}; // making arrray in stl

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    cout << "element at 1st position is " << a.at(0) << endl;

    cout << "is array empty  " << a.empty() << endl;

    cout << "first element is " << a.front() << endl;

    cout << "last element is " << a.back() << endl;

    return 0;
}

