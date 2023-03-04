int totalPairs(int N, vector<int> A, vector<int> B)
{
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (A[i] + A[j] > B[i] + B[j])
            {
                ans++;
            }
        }
    }
    return ans;
} 