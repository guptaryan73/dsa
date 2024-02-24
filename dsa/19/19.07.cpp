/* priority queue in STL */

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int> maxi; // max heap (default priority queue is made in the form of max heap)
    priority_queue<int, vector<int>, greater<int> > mini; // min heap

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " "; // as max heap hai, sabse pehle maximum element print hoga
        maxi.pop();
    }
    cout << endl;
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(4);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " "; // as min heap hai, sabse pehle minimum element print hoga
        mini.pop();
    }
    cout <<endl<< "queue khali hai " << maxi.empty() << endl;
    return 0;
}