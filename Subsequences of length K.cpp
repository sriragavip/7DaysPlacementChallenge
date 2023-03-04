void findAP(int index, int difference, vector<int> &arr, int cur,int k, long long &answer){
    // Base case.
    if (index >= arr.size()){
        return;
    }

    if(cur==k){
        answer++;
    }

    // Iterate for the remaining indexes.
    for (int i = index + 1; i < arr.size(); i++){
        if (arr[i] - arr[index] == difference){
            findAP(i, difference, arr, cur+1, k, answer);
        }
    }
}

long long subsequenceK(vector<int> &arr, int n, int k){
    if(k == 1){
        return n;
    }

    if(n == 1){
        return 0;
    }
    
    // Variable to store the answer.
    long long answer = 0;

    // Generate all possible common differences.
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            findAP(j, arr[j] - arr[i], arr, 2, k, answer);
        }
    }

    return answer;
} 