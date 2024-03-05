/* continue from 15:00 */

/* pass by reference */

#include <iostream>
#include <string>
using namespace std;
void update(int &n) // passed as call by reference instead of call by value, so actually main mein bhi value call hogi
{
    n++;
}
int main()
{
    int n = 5;
    cout << "before " << n << endl;
    update(n);
    cout << "after " << n << endl;
    return 0;
}