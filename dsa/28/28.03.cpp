/* stack wali memory -> static memory allocation -> memory apne aap use and relase hoti rehti hai
    heap wali memory -> dynamic memory allocation -> memory ko manually allocate karna padta hai and manually release karna padta hai
*/
/* variable size ka array banana hai ->  we use heap memory for this instead of the "normal" stack memory used*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    new char; // new(keyword) has been used to create a variable 'char' dynamically in the heap memory. heap mein memory ko naam nahin de sakte i.e. int i = 10 mein us memory ka name is 'i' but heap memory mein hum aise name nahin de sakte memory ko ismein bas type define kar sakte hain e.g. int,char etc. so yahan pe hum pointers ka use karte hain to point to their locations
    char *ch = new char;
    cout << ch << endl;
    return 0;
}