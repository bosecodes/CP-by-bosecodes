// Rotate matrix image 90 degrees

/*

1 2 3       7 4 1 
4 5 6  ---> 8 5 2 
7 8 9       9 6 3 

*/

// Brute force takes O(N2) as time and space complexities respectively 

/*
Approach:
Step 1: Apply Transpose (make each column a row, and vice versa)
Step 2: Reverse each individual row 
*/

// Somdev Basu
// Mann mera, maane na mann mera...



#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>> &m) {
            int n = m.size();
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    swap(m[i][j], m[j][i]);
                }
            }// Transpose done 
            
            for(int i = 0; i < n; i++) {
                reverse(m[i].begin(), m[i].end());
            }// Reversed each row 
        }
};
