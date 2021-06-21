// Given a matrix we need to find the number of paths to reach from the first element, a[0,0] to the last element a[n-1, n-1]
// We do this by using brute force, O(N*M)
// For brute force approach we use recursion, to sum up the number of paths each time we reach the final node from the first node
// We try optimising with DP, looking at right and down movements each time, but that takes us the same O(N*M) time complexity

// The most optimal approach we find out by say, we have a 2*3 matrix. Then in order for us to reach last element from first element
// we need n-1 bottom moves and m-1 right moves. Moreover, the sum of moves is always the same == number of rows 
// this can therefore reduced to a combinatorics problem. (n+m-2)C(n-1) or, (n+m-2)C(m-1)
// i.e., if i'm able to place n-1 down moves in a total of n+m-2 moves to reach the last element
// or to place m-1 right moves in a total of n+m-2 moves to reach the last element

// Somdev Basu
// I've become so numb...


#include <bits/stdc++h>

using namespace std;


class Solution {
    public:
        int UniquePaths(int m, int n) {
            int N = n+m-2;
            int r = n-1;
            double res = 1;
            
            for(int i = 1; i <= r; i++) {
                res *= (N-r+1)/i;
            }
            return (int)res;
        }
}


