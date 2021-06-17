// Kadane's Algorithm
// This algo is widely used to calculate Maximum 
// Subarray sum 

/*
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

// Brute Force: O(N3)
// Kadance's : Time : O(N), Space : O(1)

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxi = a[0];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        maxi = max(sum, maxi);
        if(sum < 0)
            sum = 0;
    }
    cout << maxi;
}

int main() {
    solve();
    return 0;
}


