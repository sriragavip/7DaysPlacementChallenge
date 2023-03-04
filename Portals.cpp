#include <bits/stdc++.h> 
int ways(int i, vector<int> &dest){
    
    if(i == 0){
        return 0;
    }

    const int mod = 1e9 + 7;
    int need = 0;
    int spare = ways(i - 1, dest);
    need += spare;
    need += 1;
    
    need += (spare - ways(dest[i - 1], dest) + mod) % mod;
    need += 1;
    need %= mod;
    return need;
}
int portals(vector<int> &dest){
    
    int n = dest.size();
     
    return ways(n - 1, dest);
} 