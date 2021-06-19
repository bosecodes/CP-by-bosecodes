// Search in a 2D Matrix 
// Leetcode problem 
// Integers are sorted in each row 
// First integer of each row is greater than the last integer of the previous row 

// Geeksforgeeks problem
// Integers are sorted column wise and row wise, both fashion

// Naive approach : Traverse the entire matrix O(n*m)

// Better solution::: 
// A better solution would be to take the target element and compare it against 
// first element of each row, after getting the desired row element < target,
// perform binary search on that row --> O(n * log m)

/*
Optimal Solution for GFG:::
We start at the last column of the first row, and store that element 
Now we start our traversal, while(i < n && j >= 0),
we check if the current element arr[i][j] < target value 
if it is, then we move the pointer down, i.e., i --> i+1
if it's arr[i][j] > target though, we update, j --> j-1, moving the pointer
towards the left
if(arr[i][j] == target) ----> "found" and break out of the loop
*/

/*
For the Leetcode problem, we can get that we can basically write the entire matrix
As a 1D array and then perform binary search to get the desired element in log n time
But that would cause O(n*m) space complexity. To avoid that, we sort them in binary search
In place. We take the first index as 0(low), check the last index as n*m-1, and the mid
Will therefore be, mid = (3*4-1-0)/2 = 5 (say n = 3, m = 4), so now i, j = 5%4, i = 5/4 (column number = 4),
Now, we can perform normal Binary Search, time complexity O(log(n*m)), space = O(1)
*/

// Somdev Basu
// Dil jaise dhadak dhadakne do



#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findGFG(vector<vector<int>> &matrix, int search) {
            int i = 0; 
            int j = matrix[0].size() - 1; // last index of first row 
            if(mat[i][j] == x) {
                cout << "found it\n";
                break;
            }
            if(mat[i][j] < search) {
                i++;
            }
            if(mat[i][j] > search) {
                j--;
            }
        }
        bool findLeetCode(vector<vector<int>> &matrix, int search) {
            if(matrix.size() == NULL)
                return false;
            int n = matrix.size();
            int m = matrix[0].size();
            int lo = 0;
            int high = n*m-1;
            while(lo <= high) {
                int mid = lo + ((high - lo) / 2);
                if(matrix[mid/m][[mid%m] == target]) {
                    return true;
                }
                else if(matrix[mid/m][mid%m] < target) {
                    lo = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
            return false;
        }
    
};







