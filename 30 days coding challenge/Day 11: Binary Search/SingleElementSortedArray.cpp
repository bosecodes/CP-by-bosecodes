// brute force: xor based approach, O(N) 
// binary search based approach here,

// Single element in the sorted array 

#include <bits/stdc++.h>

using namespace std;


class Solution{
    public:
    int SingleElement(vector<int> &nums) {
        int low = 0;
        int high = nums.size() - 2;
        int mid;
        while(low <= high) {
            mid = (high + low) >> 1; // same as dividing by 2 
            if(a[mid] == a[mid ^ 1])
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return nums[low];
    }
};
