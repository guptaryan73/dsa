/* list in STL */

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    list<int> n(l); // purain list nayi wali mein copy hogyi

    for (int i : n)
    {
        cout << i << " " << endl;
    }

    for (int i : l)
    {
        cout << i << " " << endl;
    }
    l.erase(l.begin());
    cout << "after erase " << endl;
    for (int i : l)
    {
        cout << i << " " << endl;
    }
    return 0;
}