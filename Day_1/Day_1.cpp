int Solution::solve(vector<int> &A)
{
    int n = A.size();
    int maxVal = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        maxVal = max(maxVal, A[i]);
    }
    for (int j = 0; j < n; j++)
    {
        int krih = A[j] % maxVal;
        ans = max(ans, krih);
    }
    return ans;
}