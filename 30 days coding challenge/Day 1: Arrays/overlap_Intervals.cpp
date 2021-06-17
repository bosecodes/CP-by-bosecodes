// Merge intervals 
// Leetcode

/*
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
*/

/*
Step 1: If the intervals are given in unsorted fashion,
we first sort them
Step 2: Verify if each interval is already in the intervals given till now
That's the brute force approach: O(nlogn) + O(n2)


*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>> intervals) {
            vector<vector<int>> mergedIntervals;
            
            if(intervals.size() == 0)
                return mergedIntervals;
            sort(intervals.begin(), intervals.end());
            // create a temporary interval that is used while traversing and comparing, start with first interval
            vector<int> tempInterval = intervals[0];
            
            for(auto it: intervals) {
                // here we check the maximum of the first interval's end and the next interval's end and save it as the new tempInterval
                if(it[0] <= tempInterval[1]) {
                    tempInterval[1] = max(it[1], tempInterval[1]);
                }
                // else, if there's no overlap, we push the interval into our new vector which we return, mergeIntervals
                else {
                    mergeIntervals.push_back(tempInterval);
                    tempInterval = it;
                }
            }
            mergedIntervals.push_back(tempInterval);
            return mergedIntervals;
        }
};

