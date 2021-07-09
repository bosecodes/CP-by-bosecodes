#include <bits/stdc++.h>

using namespace std;

int editDist(int i, int j, string s1, string s2, vector<vector<int>> &dp) {
    if(i < 0) return j+1; 
    if(j < 0) return i+1; 
    if(s1[i] == s2[i]) // if both are the same 
        return editDist(i-1, j-1, s1, s2);
    else { // if both aren't the same 
        int insert = 1 + editDist(i-1, j, s1, s2, dp);
        int delete = 1 + editDist(i, j-1, s1, s2, dp);
        int update = 1 + editDist(i-1, j-1, s1, s2, dp);
        return min(insert, min(delete, update));
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    cout << editDist(n-1, m-1, s1, s2);
}







