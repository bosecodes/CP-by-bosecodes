#include <bits/stdc++.h>

using namespace std;

bool subsetsum(int arr[], int sum, int n) {
    bool t[n+1][sum+1];
    memset(t, false, sizeof(t));
    cout << "THE INITIAL DP MATRIX\n";
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < sum+1; j++) {
            if(i == 0 && j == 0)
                t[i][j] = true;
            else if(j == 0)
                t[i][j] = true;
            else if(i == 0)
                t[i][j] = false;
        }
    }
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < sum + 1; j++) {
            if(arr[i-1] <= j) {
                t[i][j] =  t[i - 1][j - arr[i-1]] || t[i-1][j];
            }
            else
                t[i][j] = t[i-1][j];
        }
    }
    cout << "THE FINAL DP MATRIX\n";
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
    return t[n][sum];
}

int main() {
    int t, n, sum;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> sum;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << subsetsum(arr, sum, n) << endl;
    }
}
