/* strings in cpp -> one dimensional character array */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    char name[10]; // syntax
    cin >> name;   // taking input /* then here the number will be stored and after the word is stored, consecutive memory block mein '/0'(this character has an ascii value of 0) daal denge to depict that the word has ended  */
    name[2] = '\0';
    cout << "your name is " << name << endl;
    return 0;
}