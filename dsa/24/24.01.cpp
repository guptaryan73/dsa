/* https://leetcode.com/problems/count-primes/ */

class Solution
{
private:
    int isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    int countPrimes(int n)
    {
        int counter = 0;
        for (int i = 2; i < n; i++)
        {
            if (isPrime(i))
            {
                counter++;
            }
        }
        return counter;
    }
};

/* is solution ki complexity O(n2) hai to isko better karna hai */