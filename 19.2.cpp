/* vector in stl */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "current capacity of this vector is " << v.capacity() << endl;
    cout << "current size of this vector is " << v.size() << endl;
    v.push_back(1);
    cout << "current capacity of this vector is " << v.capacity() << endl;
    cout << "current size of this vector is " << v.size() << endl;
    v.push_back(2);
    cout << "current capacity of this vector is " << v.capacity() << endl;
    cout << "current size of this vector is " << v.size() << endl;
    v.push_back(3);
    cout << "current capacity of this vector is " << v.capacity() << endl;
    cout << "current size of this vector is " << v.size() << endl;
    cout << "element at index 2 is " << v.at(2) << endl;
    cout << "element at front is " << v.front() << endl;
    cout << "element at back is " << v.back() << endl;

    vector<int> last(v); // upar wale vector v  ko is vector last  mein copy kar rahe hain
    for (int i : last)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;

    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    // clear command vector ke sare elements uda degi and so size 0 ho jayega but capacity utni hi rahegi

    cout << "before clear command" << v.size() << endl;
    v.clear();
    cout << "after clear command" << v.size() << endl;
    return 0;
}