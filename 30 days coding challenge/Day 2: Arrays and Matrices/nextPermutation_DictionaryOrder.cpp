// Next permutation in an array sequence
// 1 3 5 4 2  ---> 1 4 2 3 5

// Intuition: Dictionary Order
// 2 step solution:::::::::::::::::::::
// traverse the array from the end
// While doing that, check for which element, 
// arr[i+1] < arr[i] --> store i in index1
// now traverse the array again from end and check 
// arr[i] > index1 --> store it in index2
// swap(arr[index1], arr[index2])
// reverse the array from arr[index1+1:]
// O(n) + O(n) + O(n) <-- Time, Space --> O(1)


// Somdev Basu
// Carry me, carry me, carry me home

#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void nextPermutation(vector<int> &nums) {
            int n = nums.size();
            int k, l;
            for(k = n-2; k >= 0; k--) {
                if(nums[k] < nums[k-1]) 
                    break;
            }
            if(k < 0) 
                reverse(nums.begin() , nums.end());
            else {
                for(l = n-1; l >= 0; l--) {
                    if(nums[l] > nums[k])
                        break;
                } // end for
            } // end else
            swap(nums[l], nums[k]);
            reverse(nums.begin() + k + 1, nums.end());
        }      
};
