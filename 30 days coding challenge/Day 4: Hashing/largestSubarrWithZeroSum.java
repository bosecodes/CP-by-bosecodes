/*
Compute the sum of the largest subarray which gives sum 0 
Naive solution: Generate all the subarrays, and then count the number of subarrays which has the longest length 
Generate all the subarrays using Kadane's Algorithm O(N2) 

Optimized : (using hashing)
1 -1 3 2 -2 -8 1 7 10 23 
if L to R is k, and L to S is k, then we can say that the sum of elements from S to R is 0.
First step, traverse the array, 1, while doing so, we keep track if the sum of the array upto this point is 0, it's not, it's 1 
If it isn't we take the element generate it's key value pair as, the (sum upto this point, index), and store it in a hashmap 
Now take the second element, -1 we see sum = 0, therefore length 2 subarray is giving 0, store it as max subarray length 
now continue 
*/

class Solution {
    public int maxLen(int A[], int n) {
        HashMap<Integer, Integer> mpp  = new HashMap<Integer, Integer>();
        int maxi = 0;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += A[i];
            if(sum == 0) {
                maxi = i+1;
            }
            else {
                if(mpp.get(A[i]) != null) {
                    maxi = Math.max(maxi, i - mpp.get(sum));
                }
                else {
                    mpp.put(sum, i);
                }
            }
        }
        return maxi;
    }
}



