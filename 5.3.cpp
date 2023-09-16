/*

i = i +1;

can be written as

i++;(post increment)

first use the current value of i and then increment the value by 1

or

++i;(pre increment)
or
i+=1;

||ly for i = i-1;

i--;(post decrement)
or
--i;(pre decrement)
or
i-=1;

e.g.

sum= sum+b;

or

sum+=b;

*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 4;
    int a = i++;

    /*
    here a mein i ki initial value hi stored hogi as post increment is pehle use karle and then uske baad increment
    so a = 4 here and after i++ is excecuted , value of i will be updated to 4 + 1 i.e. 5
    so finally a =4 and i = 5
    */

    int first = 3;
    int second = 2;
    int sum = second + first++; // post increment hai to use to purani wali value hoi hogi and use hone ke baad hi increment hogi

    // so here sum = 2 + 3 --> 5
    // and then new value of first will be updated to 3 ++ --> 4

    /* pre increment

    pehle increment karo value and then use karo

    */

    int third = 11;
    int fourth = ++third;

    // here it will be incremented first to ++11 i.e 12
    // and then the value of third will be stored inside fourth
    // so third = 12 and fourth = 12

    int fifth = 2;
    int sixth = 3;
    int sum1 = fifth + (++sixth);

    /*
    sixth is first updated to 4
    then sum1 = 4 + 2 =  6
    and sixth = 4
    */

    // ||ly is done for post and pre decrement

    int banana = 7;
    cout << ++banana << endl;
    // banana = 8 currenty  -- 1 and printed
    cout << banana++ << endl;
    // banana is printed 8 (from statement --1 ) and then incremented to 9
    cout << banana-- << endl;
    // banana = 9 (from above) and then decremented to 8
    cout << --banana << endl;
    // banana first decremented to 7 and then printed as 7
    return 0;
}