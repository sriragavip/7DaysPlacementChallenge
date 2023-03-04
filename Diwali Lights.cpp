#include <bits/stdc++.h> 
int diwaliLights(int n, int k, vector<vector<int>> &light) {
    const int mod = 1e9 + 7;
    int ans = 0;

    for(int bit = 1; bit < (1 << n); bit++){
        int last = 0; 
        int first = 1e9;
        int count = 0;

        for(int i = 0; i < n; i++){
            if(bit&(1<<i)){
                count++;
                last = max(last, light[i][0]);
                first = min(first, light[i][1]);
            }
        }

        if(last <= first and count == k){
            ans = (ans + 1) % mod;
        }
    }  

    return ans;
} 