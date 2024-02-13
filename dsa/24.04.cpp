/* continue from */

/* modulo properties

(a+b) % m = a % m +b % m
(a-b) % m = a % m - b % m
(a*b) % m = a % m * b % m

*/

/* fast exponentiation - power nikalne ka method with time complexity of O(log b) where b is the power to which the number has to be raised

a^b = a^(b/2) whole squared if b is even
a^b = a^(b/2) whole squared * a if b is odd

*/

/* https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7 */

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m)
{
    int result = 1;
     
    while (n > 0)
    {
        if (n & 1) // this means that n is odd
        {
            result = (1LL * (result) % m * (x) % m) % m; // 1LL ->long long se typecast kar diya taki answer agar badi range mein jaye to wo usko handle karle
        }
        x = (1LL * (x) % m * (x) % m) % m; // square kar diya and 1LL ->long long se typecast kar diya taki answer agar badi range mein jaye to wo usko handle karle

        n >>= 1; //  yeh (right shift) divide by 2 ke barabar hai
    }
    return result;
}
