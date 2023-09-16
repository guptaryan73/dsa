/* deque or doubly ended queue in STL */

#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    /*     for (int i : d)
        {

            cout << i;
        }

        d.pop_back();

        for (int i : d)
        {

            cout << i;
        } */

    cout << "pehla element is " << d.at(0) << endl;
    cout << "front is " << d.front() << endl;
    cout << "back is " << d.back() << endl;

    cout << "empty or not " << d.empty() << endl;
    cout << "before erasing " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // range batare kahan se kahan tak delete karna hai
    cout << "after erasing " << d.size() << endl;

    for (int i : d)
    {

        cout << i;
    }
    return 0;
}