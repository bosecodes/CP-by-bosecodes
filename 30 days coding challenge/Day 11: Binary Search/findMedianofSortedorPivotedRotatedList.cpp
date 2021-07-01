// search element in a sorted array or rotated sorted array about a pivot 

#include <bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int search(vector<int> &a, int target) {
        int low = 0;
        int high = a.size() - 1;
        while(low <= high) {
            int mid = (low + high) /2;
            if(a[mid] == target) return mid;
            
            // if the left side is sorted 
            if(a[low] <= a[mid]) {
                if(a[low] <= target && target <= a[mid]) 
                    high = mid - 1;
                else 
                    low = mid + 1;
            }
            else {
                if(a[mid] <= target && target <= a[mid]) 
                    low = mid + 1;
                else 
                    high = mid - 1;
            }
        }
        return -1;
    }
}


