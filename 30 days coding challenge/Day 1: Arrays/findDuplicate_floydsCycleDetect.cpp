// Given an array of n integers
// Where every member of the array is in range 1 to n
// Find the duplicate element
// Assuming, only 1 duplicate number

// Naive approach
/*
O(Nlogn) + O(1)
Sort the given array, if arr[i] == arr[i+1], return arr[i]
However, we will lose the array order 

Approach 2: have a second array, which has freq of each element, time: O(n), space: O(n)

Optimal: Linked List cycle method
Floyd's Cycle detection algorithm
use two pointers slow(s), fast(f)
*/

// Somdev Basu
// Jeena yaha, Marna yaha

#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findDuplicate(vector<int> &nums) {
            int slow = nums[0];
            int fast = nums[0];
            
            do {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }while(slow != fast);
            
            fast = nums[0];
            while(slow != fast) {
                slow = nums[slow];
                fast = nums[fast];
            }
            return slow;
        }
};


