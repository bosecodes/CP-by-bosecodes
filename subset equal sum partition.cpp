#include <bits/stdc++.h>

using namespace std;

bool subsetsum(int arr[], int sum, int n) {
    bool t[n+1][sum+1];
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            if(i == 0 && j == 0)
                t[i][j] = true;
            else if(i == 0)
                t[i][j] = false;
            else if(j == 0)
                t[i][j] = true;
        }
    }
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            if(arr[i-1] <= sum)
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            else
                t[i][j] = t[i-1][j];
        }
    }
    return t[n][sum];
}

int main() {
    int t, n, sum = 0;
    cin >> t;
    while(t--) {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        cout << sum << endl;
        cout << subsetsum(arr, sum/2, n) << endl;
    }
}

// Code by bosecodes
