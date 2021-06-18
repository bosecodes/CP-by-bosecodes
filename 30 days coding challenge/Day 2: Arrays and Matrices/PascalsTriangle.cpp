// Pascal's Triangle
// Row number given, print the 5th row
// Element at 5th row, column 3
// (5-1)C(3-1) = 4C2

/*
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
*/

// Somdev Basu
// Kaali kaali in raaton mei, hone lagi
// Hai dosti...

#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<vector<int>> generate(int numrows) {
            vector<vector<int>> r(numrows);
            for(int i = 0; i < numrows; i++) {
                // resize each column to store same number of elements as row number
                r[i].resize(i+1);
                // since the first and last element of each row is zero
                r[i][0] = r[i][i] = 1;
                // for the rest of the columns, we have the value of r[i-1][j-1] + r[i-1][j]
                for(int j = 1; j < i; j++) {
                    r[i][j] = r[i-1][j-1] + r[i-1][j];
                }
            }
            return r;
        }
};














