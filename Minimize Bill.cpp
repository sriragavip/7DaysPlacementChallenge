long long totalBill(int n, vector<int>& a)
{
    long long sum = 0;
    int max_element = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        max_element = max(max_element, a[i]);
    }
    return sum - 2 * max_element;
} 