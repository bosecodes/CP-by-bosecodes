// Majority element 
// Find the element that occurs >= floor of n/2 
// Brute Force: O(N2) --> We take the first element and compare it with the second element onwards, to check which of the elements is 
// equal to seven, we do this for each element in the array until we find the element that occurs more than floor of n/2 times.
// Optimal Approach
// Hashmap: You keep a hashmap, if you find any value which isn't present in the hashmap, we push the element into the hashmap as (x,1),
// however if the element is already present in the hashmap, we just take the element and increase it's count by 1, so, (x, y+1)
// while adding if at any instance we find that the value of any key in the hashmap exceeds floor of n/2, we return that element
// O(N) --> array (fixed size), if we don't use seperate array to store frequency
// O(NlogN) --> hashmap, if we don't specify a size for the list given 
// O(N) --> Space complexity

// Moore's algorithm
// we initialise two variables, ele storing an element of the vector and cnt, storing the count in each step
// 7 7 5 7 5 1 | 5 7 | 5 5 7 7 | 5 5 5 5 
// ele = 0, cnt  = 0
// now we traverse the given vector, and while, if we find ele != a[i] (current element), we store ele = a[i] (current element)
// if(ele == currentelem) --> increase count by 1 
// if not, we decrease count by 1 
// At each of the parts seperated by bars, note that the cnt turns zero for them, in the first step, 7 occurs 3 times,
// floor of 6/2 is 3, therefore 7, as stored in ele, but it gets balanced by 5 occurs twice and 1 once
// and thereby cnt = 0
// similarly in the second part, 7's count gets cancelled yet again
// finally at the end, we are left with 5, as the majority element, which is indeed true.

// Somdev Basu
// Choo lo jo mujhe tum kabhi...

class Solution {
	public:
		int solve(vector<int> &nums) {
			int cnt = 0;
			int ele = 0;
			for(int num: nums) {
				if(cnt == 0)
					ele = num;
				if(ele == num)
					cnt++;
				else 
					cnt--;
			}
			return ele;
		}
};






