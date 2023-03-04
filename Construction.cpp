#include <bits/stdc++.h> 
int construction(int N, string S)

{

// Write your code here.

    int ans=0;

    unordered_set<char> mp;

   

    for(int i=0;i<S.length();i++)

    {

        if(mp.find(S[i])==mp.end())

        {

            mp.insert(S[i]);

            ans++;

        }

    }
    return ans;

}