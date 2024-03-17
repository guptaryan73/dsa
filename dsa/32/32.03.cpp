/* nth stair pe ya to ek piche wali stair se aa sakte ya to do piche wali stair se so the recursive relation will be
f(n) = f(n-1) + f(n-2) */

#include<iostream>
#include<string>
using namespace std;
int countDistinctWays(int nStairs)
{
    // base case
    if (nStairs == 0) // this is the case where 0th stair pe khade ho so uspe wapas aane ak ek hi tarika hai i.e. jump karke wapas usi stair pe aa gye
    {
        return 1;
    }
    if (nStairs < 0) // this is the case where the stair's number is negative i.e. stair doesn't exist, so in this case 0 return kar denge
    {
        return 0;
    }
    // recursive relation
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}
