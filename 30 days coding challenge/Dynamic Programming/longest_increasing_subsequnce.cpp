// Longest Increasing Subsequence 

// [50, 3, 10, 7, 40, 80] --> 4  (3, 10, 40, 80) OR  (3, 7, 40, 80)

// Somdev Basu 
// Zubi dubi, Zubi dubi, pampara, zubi dubi parampam


#include <bits/stdc++.h>

using namespace std;


int lis(int arr[], int n) {
    int dp[n];
    // Take first element of dp as 1, as it can itself form a Subsequence of length 1  
    dp[0] = 1;
    for(int i = 1; i < n; i++) {
        dp[i] = 1; 
        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1)
                dp[i] = 1 + dp[j];  
        }
    }
    return *max_element(dp, dp+n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << lis(arr, n);
}
