void Solution::solve(vector<vector<int>> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        { // Corrected loop initialization
            swap(A[i][j], A[j][i]);
        }
    }
    for (int k = 0; k < n; k++)
    {
        reverse(A[k].begin(), A[k].end());
    }
}