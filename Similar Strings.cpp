#include <bits/stdc++.h> 
vector < int > similarStrings(int n, string a, string b, string c) {
        int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        
        int diff = 0;
        for (int j = 0; j < n; j++) {
            
            diff += abs(a[j] - b[j]);
        }
        
        for (int j = 0; j < n; j++) {
            
            diff += abs(a[j] - c[j]);
        }
        
        mn = min(mn, diff);
        mx = max(mx, diff);
        reverse(a.begin(), a.begin() + 1);
        reverse(a.begin() + 1, a.end());
        reverse(a.begin(), a.end());
    }
    
    vector < int > answer;
    answer.push_back(mx);
    answer.push_back(mn);
    return answer;
} 
 