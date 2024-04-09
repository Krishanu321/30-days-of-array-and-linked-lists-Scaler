int Solution::solve(vector<int> &A)
{
    int n = A.size();
    sort(A.begin(), A.end());
    int count = 0;
    // A.sort;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[0] < A[i] && A[i] < A[n - 1])
        {
            count++;
        }
    }
    return count;
}