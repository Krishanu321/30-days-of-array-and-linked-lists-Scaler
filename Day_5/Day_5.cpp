int Solution::slove(vector<int> &A)
{
    int n = A.size();
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] % 2 == A[i + 1] % 2)
        {
            k++;
        }
    }
    return n - k;
}