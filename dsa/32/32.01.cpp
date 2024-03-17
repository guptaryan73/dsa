/* reaching home from a place using recursion*/

#include <iostream>
#include <string>
using namespace std;
int reachHome(int start, int destination)
{
    if (start == destination)
    {
        cout << "reached home" << endl;
        return 1;
    }
    cout << start << endl;
    return reachHome(start+1, destination);
}
int main()
{
    int destination = 10;
    int start = 1;
    reachHome(start, destination);
    return 0;
}
