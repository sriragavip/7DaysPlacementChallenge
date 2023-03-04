#include <bits/stdc++.h> 
int count(int N, string S)
{
    unordered_set<int> ans;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    ans.insert(0);
    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        {
            if (S[i] == 'U')
            {
                x1--;
            }
            else if (S[i] == 'D')
            {
                x1++;
            }

            else if (S[i] == 'L')
            {
                y1--;
            }

            else
            {
                y1++;
            }

            ans.insert((x1 * 1e6) + y1);
        }
        else
        {
            if (S[i] == 'U')
            {
                x2--;
            }

            else if (S[i] == 'D')
            {
                x2++;
            }
            else if (S[i] == 'L')
            {
                y2--;
            }

            else
            {
                y2++;
            }
            ans.insert((x2 * 1e6) + y2);
        }
    }
    return ans.size();
} 