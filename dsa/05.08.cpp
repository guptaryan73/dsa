/* scope of variables */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a = 3;
    cout << a;
    if (true) // yeh condidtion mein tru hai so citrol is if statement ke andar jayega hi jayega
    {
        int a = 5; // int i ko firse bana diya and as yeh wala a is scope ke andar bana hai, so yeh wala cout andar wale a ko use karega and bahar wala a bahar wale a ko use karega
        cout << a << endl;
    }
    cout << a << endl;

    // e.g.

    int x = 3;

    cout << x;

    if (true)
    {
        int y = 5; // int i ko firse bana diya and as yeh wala a is scope ke andar bana hai, so yeh wala cout andar wale a ko use karega and bahar wala a bahar wale a ko use karega
        cout << y << endl;
    }

    int y = 1;
    cout << y; // here yeh y ko identify nahi kar pa raha hai y andar wale block mein define hua hai and idhr nahi access ho payega and agar idhr bahar use karna hai to hume ek naya int b = 1 banana padega and so here 1 will be printed

    // agar hum idhr ek aur y bana den, then ?

    // int y = 2;
    cout << y << endl;

    // but yeh nahi chalega as hum same variable b ko redefine karne ki try kar rahe hain

    // another e.g.

    int loop = 8;

    for (int loop = 0; loop < 8; loop++) // idhr for loop ne loop variable ko explicitly banaya hai to yeh isi loop variable ko use karega and so yeh loop 8 bar chalega
    {
        cout << " hi" << endl;
    }

    // if loop ke andar se hum loop = 0 hata den then usko nahi pata ki loop naam ka variabe kya hai so then in this case wo upar wali loop  = 8 ki value ko consider karega
    return 0;
}
