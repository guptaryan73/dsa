/* SWITCH CASE */

/*

switch (expression)
{
    case1 (constant1):
        content to be excecuted
        break;
    case2 (constant2):
        content to be excecuted
        break;
    default:
        content to be excecuted
        break;

        where constant can be any integer, character etc but not float or string
}

*/

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
int number = 2;
switch (number)
{
    case 1: cout<<"Number 1";
            break;
    case 2: cout<<"Number 2";
            break;
    default: cout<<"Not valid";
            break;
}

char ch = '1'; // so case '1' wale case mein jayega
switch (ch)
{
case 1:
    cout<<"Number 1";
    break;
case '1' :
    cout<<"Character 1";
default:
    break;
}
return 0;
} */

// if the case was like

#include <iostream>
#include <string>
using namespace std;
int main()
{

    char ch = '1';
    int num = 1;
    switch (num)
    {
    case 1:
        cout << "Number 1";
        // break;
    case '1':
        cout << "Character 1";
    default:
        break;

        /* is case mein dono number 1 wala case and character 1 wala case dono print ho gaye. it should have only excecuted the number 1 wala case. here humne break statement hata di thi case 1 ki. agar break laga hota then wo number 1 print karke bahar aa jata, but agar break nahi laga hua then wo matched wala case 1 to excecute karega hi karega and uske alawa uske just niche wala ek aur  case bhi automatically excecute kar dega i.e. character 1 wala case  */
    }
    return 0;
}
