/* https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1 */

#include <vector>
#include <string>
using namespace std;

class Solution
{
    bool isSafe(int sourceXcoordinate, int sourceYcoordinate, vector<vector<int>> &m, int n, vector<vector<int>> visited)
    {
        if ((sourceXcoordinate >= 0 && sourceXcoordinate < n) && (sourceYcoordinate >= 0 && sourceYcoordinate < n) && visited[sourceXcoordinate][sourceYcoordinate] == 0 && m[sourceXcoordinate][sourceYcoordinate] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

private:
    void solve(vector<vector<int>> &m, int n, vector<string> &answer, int sourceXcoordinate, int sourceYcoordinate, vector<vector<int>> visited, string path)
    {

        // you have reached x,y here
        // base case
        if (sourceXcoordinate == n - 1 && sourceYcoordinate == n - 1)
        {
            answer.push_back(path);
            return;
        }
        visited[sourceXcoordinate][sourceYcoordinate] = 1;
        // 4 choices: D,U,L,R

        // down
        int newX = sourceXcoordinate + 1;
        int newY = sourceYcoordinate;

        if (isSafe(newX, newY, m, n, visited))
        {
            path.push_back('D');
            solve(m, n, answer, newX, newY, visited, path);
            path.pop_back();
        }
        visited[sourceXcoordinate][sourceYcoordinate] = 0;

        // left
        newX = sourceXcoordinate;
        newY = sourceYcoordinate - 1;

        if (isSafe(newX, newY, m, n, visited))
        {
            path.push_back('L');
            solve(m, n, answer, newX, newY, visited, path);
            path.pop_back();
        }
        visited[sourceXcoordinate][sourceYcoordinate] = 0;

        // right
        newX = sourceXcoordinate;
        newY = sourceYcoordinate + 1;

        if (isSafe(newX, newY, m, n, visited))
        {
            path.push_back('R');
            solve(m, n, answer, newX, newY, visited, path);
            path.pop_back();
        }
        visited[sourceXcoordinate][sourceYcoordinate] = 0;

        // up
        newX = sourceXcoordinate - 1;
        newY = sourceYcoordinate;

        if (isSafe(newX, newY, m, n, visited))
        {
            path.push_back('U');
            solve(m, n, answer, newX, newY, visited, path);
            path.pop_back();
        }
        visited[sourceXcoordinate][sourceYcoordinate] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> answer;
        int sourceXcoordinate = 0;
        int sourceYcoordinate = 0;

        if (m[0][0] = 0) // matrix ka pehla element hi 0 hai
        {
            return answer;
        }

        vector<vector<int>> visited = m;
        // initialise visited vector with 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(m, n, answer, sourceXcoordinate, sourceYcoordinate, visited, path);
        sort(answer.begin(), answer.end());
        return answer;
    }
};

