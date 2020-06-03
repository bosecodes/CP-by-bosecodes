// Knapsack problem

RECURSIVE APPROACH

#include <bits/stdc++.h>

using namespace std;

int knapsack(int wt[], int val[], int w, int n) {
    if(n == 0 || w == 0)
        return 0;
    if(wt[n-1] <= w) {
        return max(val[n-1] + knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));
    }
    return (wt, val, w, n-1);
}

int main() {
    int t, n, w;
    cin >>  t;
    while(t--) {
        cin >> n;
        cin >> w;
        int wt[n], val[n];
        for(int i = 0; i < n; ++i){
            cin >> wt[i] >> val[i];
        }
        cout << knapsack(wt, val, w, n) << endl;
    }
}

// Code contributed by bosecodes



/*
    Dynamic Programming in C++ to demonstrate Knapsack problem using ITERATIVE APPROACH
*/

#include <bits/stdc++.h>

using namespace std;

int t[100][100];


int knapsack(int wt[], int val[], int w, int n) {
    //int t[n+1][w+1];
    memset(t, -1, sizeof(t));
    cout << "THE STARTING OF DP MATRIX \n";
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < w + 1; j++) {
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < w + 1; j++) {
            if(i == 0 || j == 0)
                t[i][j] = 0;
        }
    }
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < w + 1; j++) {
            if(wt[i-1] <= j) {
                t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    cout << "DP MATRIX AFTER MODIFICATION\n";
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < w + 1; j++) {
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
    return t[n][w];
}

int main() {
    int t, n, w;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> w;
        int wt[n];
        int val[n];
        for(int i = 0; i < n; i++) {
            cin >> wt[i] >> val[i];
        }
        cout << knapsack(wt, val, w, n) << endl;
    }
}

// Code by bosecodes
