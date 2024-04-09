int Solution::maxSubArray(const vector<int> &A)
{
    int sum = 0;
    int currentSum = A[0];
    for (intni = 0; i < A.size(); i++)
    {
        sum = max(A[i], sum + A[i]);
        currentSum = max(currentSum, sum);
    }
    return currentSum;
}