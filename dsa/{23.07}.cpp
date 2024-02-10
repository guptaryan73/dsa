/* leetcode - 74. Search a 2D Matrix */

/* binary search use karenge */

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size(); // number of columns nikalne ke liye kisi ek row ka size nikal liya

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        
            int element = matrix[mid / col][mid % col]; /* using this as 2d array mein seedha matrix[mid] nahin use kar peyenge so mid/col gives the row index and mid % col gives the col index */
            if (element == target)
            {
                return true;
            }
            else if (element < target)
            {
                start = mid + 1;
            }
            else if (element > target)
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        
    }
    return false;
}
