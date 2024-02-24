/* book allocation problem (binary search) */ /* rewatch vifeo if clarification needed */

/*
hint statement for these types of questions - the maximum number of books allocated to each student is minimum
*/

bool isPossible(int arr[], int N, int M, int mid)
{
    int StudentCount = 1, PageSum = 0;
    for (int i = 0; i < N; i++)
    {
        if (PageSum + arr[i] <= mid)
        {
            PageSum += arr[i];
        }
        else
        {
            StudentCount++;
            if (StudentCount > M || arr[i] > mid)
            {
                return false;
            }
            PageSum = arr[i];
        }
    }
    return true;
}
int findPages(int arr[], int N, int M)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + ((end - start) / 2);
    int answer = 0;
    while (start >= end)
    {
        if (isPossible(arr, N, M, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    mid = start + ((end - start) / 2);
    return answer;
}