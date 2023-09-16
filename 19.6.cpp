/* queue in STL */

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("a");
    q.push("b");
    q.push("c");
    cout << "front element " << q.front() << endl;
    cout << "size before pop " << q.size() << endl;
    q.pop();
    cout << "front element " << q.front() << endl;
    cout << "size after pop " << q.size() << endl;
    return 0;
}