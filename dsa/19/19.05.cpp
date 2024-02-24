/* stack in STL */

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("1");
    s.push("2");
    s.push("3");
    cout << "top element is " << s.top() << endl;
    s.pop();
    cout << "top element is " << s.top() << endl;
    cout << "size of the stack is " << s.size() << endl;
    cout << "is the stack empty? " << s.empty() << endl;
    return 0;
}