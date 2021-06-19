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
        // now for each element, we check subarray uptil that index, to find whether 
        // there exists an element smaller than the current element, and update the 
        // maximum length of the subsequence iteratively
        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1)
                dp[i] = 1 + dp[j];  
        }
    }
    return *max_element(dp, dp+n);
    
    // Now, to print the LIS itself 
    int index = 0;
    int maxi = dp[0];
    for(int i = n-1; i >=0 ; i--) {
        if(dp[i] > maxi){
            maxi = dp[i];
            index = i;
        }
    }
    
    vector<int> seq;
    seq.push_back(arr[index]);
    for(int i = index - 1; i >= 0; i--) {
        if(dp[i] + 1 == dp[index] && arr[i] < arr[index]) {
            index = i;
            seq.push_back(arr[index]);
        }
    }
    // now reverse the list 
    reverse(seq.begin(), seq.end());
    for(auto it: seq) {
        cout << it << "\t";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int len = lis(arr, n);
    cout << len;
    lis(arr, n);
}
