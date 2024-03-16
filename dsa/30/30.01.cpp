/* #define is used to define/create a macro in cpp */

#define PI 3.14  // a macro named "PI" has been created with value 3.14

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int radius = 5;
    double area = PI * radius * radius; // using macro here
    cout << area;
    return 0;
}