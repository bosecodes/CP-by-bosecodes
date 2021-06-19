// Longest Increasing Subsequence 

// [50, 3, 10, 7, 40, 80] --> 4  (3, 10, 40, 80) OR  (3, 7, 40, 80)

// Somdev Basu
// Bhebe dekhocho ki, tararao koto alokborsho dure...

#include <bits/stdc++.h>

using namespace std;


int lis(int arr[], int n) {
    vector<int> dp(n);
    dp.push_back(arr[0]);
    for(int i = 1; i < n; i++) {
        if(dp.back() < arr[i])
            dp.push_back(arr[i]);
        else {
            int index = lower_bound(dp.begin(), dp.end(), arr[i]) - dp.begin();
            dp[index] = arr[i];
        }
    }
    return dp.size();
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
