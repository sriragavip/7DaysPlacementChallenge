vector<int> multiply(vector<int> &a, vector<int> &b, int n){
    
    vector<int> ans(2*n - 1);
        for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[i + j] += a[i] * b[j];
        }
    }
    
    return ans;
} 