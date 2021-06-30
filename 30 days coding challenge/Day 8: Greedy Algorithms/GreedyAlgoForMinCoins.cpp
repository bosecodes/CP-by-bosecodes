// Min no of coins to prepare a given sum 
// Time complexity <= V (Value) . Space complexity : O(1)

#include <bits/stdc++.h>

using namespace std;

int solve(int V) {
    int deno[] = {1,2,5,10, 20, 50, 100, 500, 1000}; // this only works because sum of previous values can never 
    // exceed the current value otherwise, greedy won't work
    int n = 9; // number of types of coins 
    vector<int> ans;
    for(int i = n-1; i >= 0; i--) {
        while(V >= deno[i]) {
            V -= deno[i];
            ans.push_back(deno[i]);
        }
    }
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\t";
}

int main() {
    int V;
    cin >> V;
    solve(V);
}


