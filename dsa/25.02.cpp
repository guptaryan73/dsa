/* pointer - stores address */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 5;
    int *ptr = &i; // ptr naam ka ek pointer create karke uske andar i ka address daal diya || int * ptr means ptr is a pointer to int datatype ka ek variable
    cout << i << endl;
    cout << *ptr << endl; // aise bhi value print kar sakte hain where * is the derefernce operator
    cout << ptr << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    int *p = &i;
    cout << "before " << i << endl;
    (*p)++;
    cout << "after " << i << endl;
    return 0;
}
