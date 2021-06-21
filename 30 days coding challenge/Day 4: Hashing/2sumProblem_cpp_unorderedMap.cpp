// Given an integer array nums and a target value,
// check whether sum of any two elements(find the pair) of nums add up to the target 
// There will be exactly one solution, and an element can be repeated 

// Somdev Basu
// Yeh ladki h deewaani h deewani


#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int> &numbers, int target) {
            vector<int> res;
            unordered_map<int, int> mpp;
            for(int i = 0; i < numbers.size() ;i++) {
                if(mpp.find(target-numbers[i]) != mpp.end() ) { // find returns the index of the element found, if it reaches the end, then don' return 
                    res.push_back(mpp[target-numbers[i]]);
                    res.push_back(i);
                    return res;
                }
                mpp[nums[i]] = i;
            }
            return res;
        }
};









