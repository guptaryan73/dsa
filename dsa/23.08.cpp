/* 240. Search a 2D Matrix II */
/* is question mein mid start end ( binary search ) wali approach nahin laga sakte as matrix sorted nahin hai so we start from the last element in the first row i.e. 15 here and equal case mein answer return, smaller ke case mein row++ and larger ke case mein col -- karke actual answer tak pahunche ki try karenge */
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;       /* main last element of 0th row i.e 15 here se start kar raha hun search ko */
        int colIndex = col - 1; /* main last column se start kar raha hun search ko*/

        while (rowIndex < row && colIndex >= 0)
        {
            int currentElement = matrix[rowIndex][colIndex];
            if (currentElement == target)
            {
                return 1;
            }
            else if (currentElement > target)
            {
                colIndex--;
            }
            else
            {
                rowIndex++;
            }
        }
        return 0;
    }
};