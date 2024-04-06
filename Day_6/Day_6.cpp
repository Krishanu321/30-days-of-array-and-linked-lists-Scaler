vector<int> Solution::getRow(int A)
{
    vector<int> v(A + 1, 0); // Initialize vector of size A+1 with all elements as 0
    v[0] = 1;                // Set the first element to 1
    for (int i = 1; i <= A; i++)
    {
        // Calculate the next element using the previous element
        for (int j = i; j > 0; j--)
        {
            v[j] = v[j] + v[j - 1];
        }
    }
    return v;
}