/* length of string */

int getLength(char name[]) // don't need to pass the size of the string (like we used to do in case of arrays)
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) // tab tak chalega jab tak null character encounter nahi hota
    {
        count++;
    }
    return count;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    char name[10]; // syntax
    cin >> name;   // taking input /* then here the number will be stored and after the word is stored, consecutive memory block mein '/0'(this character has an ascii value of 0) daal denge to depict that the word has ended  */
    // name[2] = '\0';
    cout << "your name is " << name << endl;
    cout << "length is " << getLength(name) << endl;
    return 0;
}