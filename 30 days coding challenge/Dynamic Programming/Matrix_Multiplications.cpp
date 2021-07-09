#include <bits/stdc++.h>

using namespace std;

int MCM(int i, int j, int a[], vector<vector<int>> &dp) {
	if(i == j) return 0;
	int min = INT_MAX;
	if(dp[i][j] != -1) return dp[i][j];
	for(int k = i; k < j; k++) {
		int count = MCM(i, k, a, dp) + MCM(k+1, j, a, dp) + a[i-1] * a[k] * a[j];
		if(count < min)
			min = count;
	}
	return dp[i][j] = min;
}

int main() {
	int arr[] = {1, 2, 3, 4, 3};
	int n = 5;
	vector<vector<int>> dp(n, vector<int>(n, -1));
	cout << MCM(1, n-1, arr, dp);
}





