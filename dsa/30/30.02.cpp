/* global variable - a variable that can be used anywhere in the function */

#include <iostream>
#include <string>
using namespace std;

int score = 15; // global variable

void b(int &i)
{
    cout << i << endl;
    cout << "Score: " << score << endl;
}
void a(int &i)
{
    cout << i << endl;
    cout << "Score: " << score << endl;
    b(i);
}
using namespace std;
int main()
{
    int i = 5; // here i is a local variable to this main function
    cout << "Score: " << score << endl;
    a(i);
    return 0;
}