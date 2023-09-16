/* map in STL */
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "1";
    m[2] = "2";
    m[13] = "3"; // method 1 to insert

    m.insert(std::make_pair(5, "1")); // method 2 to insert
    cout << "before erease" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "is 13 present " << m.count(13) << endl;
    m.erase(13);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(5);
    for(auto i = it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
    return 0;
}