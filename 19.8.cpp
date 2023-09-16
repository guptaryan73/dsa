/*
sets in STL
- stores only unique values
- elements are returned in sorted order (not in the case of unordered set)
*/

#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(1); // e.g. 1 do bar repeat hua but sets mein ek hi bar considered ki jayegi duplicate value
    s.insert(3);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "2 is present or not " << s.count(2) << endl;

    set<int>::iterator itr = s.find(2);

    cout << "value present at itr " << *it << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}