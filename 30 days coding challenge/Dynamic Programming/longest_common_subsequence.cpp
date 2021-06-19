// Longest Common Subsequence 
/*

AFXDG, FVDELG : FDG : 3  
BCD, AEF : NULL : 0

*/

// Brute force: try all possible combinations, O(n*n)

// Somdev Basu
// Kiki, do you love me


#include <bits/stdc++.h>

using namespace std;

int lcs(int i, int j, string s1, string s2, vector<vector<int>> &dp) {
    // base case 
    if(i >= s1.size() || j >= s2.size()) {
        return 0;
    }
    // if the state has been visited previously, i.e., it's no longer -1 
    if(dp[i][j] != -1) {
        return dp[i][j];
    }
    // if the characters match, 
    if(s1[i] == s2[j])
        return 1 + lcs(i+1, j+1, s1, s2, dp);
    // if both characters aren't the same 
    else {
        // we take the larger of the two subsequences 
        int left = lcs(i+1, j, s1, s2, dp);
        int right = lcs(i, j+1, s1, s2, dp);
        return dp[i][j] = max(left, right);
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    // initialise a 2D vector with -1 on every index 
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout << lcs(0, 0, s1, s2, dp);
}
