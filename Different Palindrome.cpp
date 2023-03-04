#include <bits/stdc++.h> 
bool checkOk(int q, vector<vector<int>> &a, string s) {
    for (int i = 0; i < q; i++) {
      int l = a[i][0], r = a[i][1];
      while (l < r) {
        if (s[l - 1] != s[r - 1]) {
          return false;
        }
        l++;
        r--;
      }
    }
    return true;
}

int differentPalindrome(int n, int q, vector<vector<int>> &a) {
    int ans = n;
    for (int i = 0; i < (1 << n) - 1; i++) {
      string s = "";
      for (int j = 0; j < n; j++) {
        if (((i >> j) & 1) == 1) {
          s += 'a';
        }
        else {
          s += 'b';
        }
      }
      if (checkOk(q, a, s)) {
        int diff = 0;
        for (int j = 0; j < n; j++) {
          if (s[j] == 'a') {
            diff++;
          } else {
            diff--;
          }
        }
        ans = min(ans, abs(diff));
      }
    }
    return ans;
}

  
 