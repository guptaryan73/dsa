/* https://leetcode.com/problems/count-primes/ */

/* better solution using sieve of eratusthenus algorithm

1. consider that all numbers from 2 to n-1 are prime
2. jaise ab 2 pe pahunche to 2 to prime hai but aage jo bhi numbers 2 ke table mein aate unhe non - prime mark karde
3. then aise hi aage bhadte jao and agar number bacha hua hai to aage uske table mein jo bhi number aate hain unhe non - prime mark karte jao

*/



class Solution
{
public:
    int countPrimes(int n)
    {
        int count = 0;
        vector<bool> primes(n + 1, true); // size of the created vector is n+1 taki space ki dikkat hi na ho and shuru mein har ek element = true kar diya

        primes[0] = primes[1] = false; // as 0 and 1 are non-prime numbers

        for (int i = 2; i < n; i++)
        {
            if (primes[i])
            {
                count++;
                // jo bhi  is particular number ke table mein aare hain unhe non - prime mark karna hai
                for (int j = 2 * i; j < n; j += i)
                {
                    primes[j] = 0;
                }
            }
        }
        return count;
    }
};

/* time complexity of this solution is n/2 (jab 2 ke table wale sare remove kiye) + n/3 + n/5 + n/7 and so on  

n common le liya so n  (1/2+1/3+1/5) which is a HP which has the answer n  (log(log(n))) 

so the answer is O (n*(log(log(n)))) */