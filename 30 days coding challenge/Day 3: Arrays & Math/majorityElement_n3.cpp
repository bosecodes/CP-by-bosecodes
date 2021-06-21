// Given an integer array of size n, find all the elements which occur more than n/3 times 
// Brute force: O(n2) time, O(1) space 
// Better solution: Use a hashmap(in case we have unknown number of elements, vector), or a frequency array(in case we know the number of elements, array)
// Time coplexity:                         O(NlogN)                                                          O(N)
// Space : O(N)

// Boyer moore's voting algorithm: Look, there can't be more than 2 elements that occur more than n/3 times
// Extension of the last algo : see here : https://www.youtube.com/watch?v=yDbkQd9t2ig&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=17
// This takes O(n) time to find the elements 
// And O(n) time to check the number of times element is present, if it's greater than n/3, so O(N) overall

// Somdev Basu
// Mere sapno ki raani kab aayegi tu


#include <bits/stdc++.h>

using namespace std;


class Solution {
	public:
		vector<int> solve(vector<int> &nums) {
			int sz = nums.size();
			int num1 = -1, num2 = -1, c1 = 0, c2 = 0, ele = 0;
			// since this time we aren't sure there exists a majority element itself, we initialse num1, num2 as -1
			for(int i = 0; i < sz; i++) {
				if(nums[i] == num1)
					c1++;
				else if(nums[i] == num2)
					c2++;
				else if(c1 == 0) {
					num1 = nums[i];
					c1++;
				}
				else if(c2 == 0) {
					num2 = nums[i];
					c2++;
				}
				else {
					c1--;
					c2--;
				}
			}
			vector<int> ans;
			c1 = c2 = 0;
			for(i = 0; i < sz; i++) {
				if(nums[i] == num1)
					c1++;
				if(nums[i] == num2)
					c2++;
			}
			if(c1 > sz/3)
				ans.push_back(num1);
			if(c2 > sz/3)
				ans.push_back(num2);
			return ans;
		}
};
