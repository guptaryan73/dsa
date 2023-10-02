/* BITWISE OPERATOR */

/*
AND -> &
OR -> |
NOT -> ~
XOR -> ^

inke truth table same as jo college mein padhe hue

AND

a = 5 -->   1         0       1  (1 & 1 IS 1 IN 'AND' KA TRUTH TABLE)

b = 7 -->   1         1       1  (0 & 1 IS 0 IN 'AND' KA TRUTH TABLE)
            ----------------------------------------------------------------
            1         0       1

            here ans = 1 0 1 i.e. 5 in decimal

OR

a = 2 -->   0         1       0  (1 & 1 IS 1 IN 'OR' KA TRUTH TABLE)

b = 4 -->   1         0       0  (0 & 1 IS 1 IN 'OR' KA TRUTH TABLE)
            ----------------------------------------------------------------
            1         1       0

            here ans = 1 1 0 i.e. 6 in decimal

NOT

a = 2 -->  0 0 0 ..... 0 0 1 0 (as int is in 4 byte or 32 bit)

so doing ~ a = 1 1 1 1 1.....1 1 0 1

in ~a , the 1st bit is 1 which means ~a is negative

to print ~ a, first take 1s compliment

0 0 0 0...... 0 0 1 0

and then 2s complement

so ~a = 0 0 0 0...... 0 0 1 1 i.e. 3

so ~a =  - 3

XOR

a = 2 -->   0         1       0  (1 & 1 IS 0 IN 'XOR' KA TRUTH TABLE)

b = 4 -->   1         0       0  (0 & 1 IS 1 IN 'XOR' KA TRUTH TABLE)
            ----------------------------------------------------------------
            1         1       0

            here ans = 1 1 0 i.e. 6 in decimal

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int first = 4;
    int second = 6;

    cout << (first & second) << endl;
    cout << (first | second) << endl;
    cout << (~first) << endl;
    cout << (first ^ second) << endl;
    return 0;
}
