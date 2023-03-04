int countMinOp(int n, int m, vector<vector<int>>& mat)
{
    int ans = n;
    for (int i = 0; i < (1 << n); i++)
    {
        vector<vector<int>> tmp = mat;
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (((i >> j) & 1) == 1)
            {
                cnt++;
                for (int k = 0; k < m; k++)
                {
                    tmp[j][k] = 0;
                }
            }
        }

        int sumM = 0;
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            sumM += tmp[j][m - 1];
        }
        for (int j = 0; j < m - 1; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += tmp[k][j];
            }
            if (sum >= sumM)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            ans = min(ans, cnt);
        }
    }
    return ans;
} 