int Solution::maxProfit(const vector<int> &A)
{
    if (A.size() <= 0)
        return 0;
    int mi = A[0];
    int mx = 0;
    for (int i = 0; i < A.size(); i++)
    {
        mi = min(mi, A[i]);
        mx = max(mx, A[i] - mi);
    }
    return mx;
}