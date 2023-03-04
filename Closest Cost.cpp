#include <bits/stdc++.h>
using namespace std; 
int ans = INT_MAX;
int diff = INT_MAX;
void solve(int s, vector<int> &gift, int index, int sum, int X){
	if(index >= s){
		int val = abs(X-sum);
		if(val < diff){
			diff = val;
			ans = sum;
		}else if(val == diff){
			ans = min(ans, sum);
		}
		return;
	}
	solve(s, gift, index+1, sum, X);
	solve(s, gift, index+1, sum+gift[index], X);
	solve(s, gift, index+1, sum+gift[index]*2, X);
}
int closestCost(int N, int M, int X, vector<int> W, vector<int> G)
{
	for(int i = 0; i < W.size(); i++){
		solve(M, G, 0, W[i], X);
	}
	int temp = ans;
	ans = INT_MAX;
	diff = INT_MAX;
	return temp;
}