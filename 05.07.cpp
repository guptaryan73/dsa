// continue keyword
// used to skip any content below it in the iteration

#include <iostream>
#include <string>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "hi" << endl;
        cout << "bonk" << endl;
        continue;
        // continue ke baad wali cheeze excecute nahi hoti and wapas control loop ke  next itrration mein upar chale jata hai
        cout << "banana" << endl;
    }

    return 0;
}
