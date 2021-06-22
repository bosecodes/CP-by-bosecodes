// Longest consecutive sequence in a given array 
// Naive: Sort the array, find all the consecutive sequences, and return the length 
// Distorts the array for sort O(NlogN) and O(N) for finding the largest sequences 
// Optimized: Linearly iterate the array and put all the elements in a hashset 
// 102 4 100 1 101 3 2 
/*
OPTIMAL APPROACH:::::::::::::::::::::
The first element is 102, we ask if there's a number that's 1 less than 102 in the array, yes, do nothing
Next, check 4, we ask if there's a number that's 1 less than 4 in the array, yes, do nothing 
Next, for 100, we check if 99 exists, it DNE, we move to the next number, 101 exists? yes, 102? yes, 103? no, do nothing 
We got the length as 3, (by increasing the count at each step)
next for 1, 0 DNE, we check 1+1, exists, yes, 3, yes, 4, yes, 5, no.. therefore count  = 4 
update the max count as 4,
Next for 101, we check 101-1 exists, yes, do nothing 
Next for 3, we check if 2 exists, yes, do nothing 
Next for 2, we check if 1 exists, yes, do nothing
O(N) + O(N) + O(N)
For the first time, when we push every element into the set 
For the second time, for the iteration over the array 
For the third, checking a whole set for the max count, O(N)
Therefore the time and space complexities are O(N) and O(N) respectively.
*/

import java.util.*;
import java.io.*;

class Solution {
    public int longestConsecutiveSequence(int nums[]) {
        Set<Integer> hashset = new HashSet<Integer>();
        for(int num : nums) {
            hashset.add(num);
        }
        int longestStreak = 0;
        for(int num : nums) {
            if(!hashset.contains(n-1)) {
                int currentNum = num;
                int currentStreak = 1;
                while(hashset.contains(currentNum+1)) {
                    currentNum++;
                    currentStreak++;
                }
                longestStreak = Math.max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
}


