/* eg. 3 = 0011 so the number of set bits(1's) in 3 is 2  */

/* pass by value --> creates a copy when a  value is passed to a function by the main function and this copy and the original varaible are independent of each other */

#include <iostream>
#include <string>
using namespace std;

void print(int value)
{
    value++;
    cout << value << endl;
}
int main()
{
    int value;
    cin >> value;
    print(value);
    cout << value << endl;
    return 0;
}

/* path by reference --> ismein actually wo value main function se us new wale function mein cahli jati hai and any changes made on that value inside the function also affect it's value in the main function   */