#include <bits/stdc++.h> 
bool maximumHappinessIndexHelper(int h, int n, int m, vector<int> &a) {
    long long candies_needed = 0;
    for (int i = 0; i < n; ++i) {

        if (a[i] < h) {

            candies_needed += h - a[i];
        }
    }

    return candies_needed <= m;
}

int maximumHappinessIndex(int n, int m, vector<int> &a) {
    int upper_bound = *max_element(a.begin(), a.end()) + m / n;
    for (int i = upper_bound; i >= 1; --i) {

        if (maximumHappinessIndexHelper(i, n, m, a)) {
            return i;
        }
    }
    return 1;
}
 
