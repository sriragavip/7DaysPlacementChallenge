vector<int> reduceFat(vector<int> food)
{
    int n = food.size();
    int ans = min(food[0], food.back());
    int len = 0;

    for (int i = 0; i + 1 < n; i++)
    {   
        if ( ans % food[i] == 0)
        {
            len = max(len, i + 1);
        }
        else 
        {
            break;
        } 
    }
    for (int i = n - 1; i > 0; i--)
    {   
        if (ans % food[i] == 0)
        {
            len = max(len, n - i);
        }
        else 
        {
            break;
        } 
    }

    vector<int> result = {ans, len};

    return result;
} 