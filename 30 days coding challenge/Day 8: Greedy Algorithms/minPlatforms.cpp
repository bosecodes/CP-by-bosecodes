// Minimum number of platforms required to accomodate all trains in a given day 
// Time Complexity = O(2NLOGN) + O(N), Space Complexity O(1)


#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int dep[], int n) {
    // first sort the arrival and departure times 
    sort(arr, arr+n);
    sort(dep, dep+n);
    int minPlatforms = 1;
    int result = 1;
    int i = 1, j = 0;
    while(i < n && j < n) {
        if(arr[i] <= dep[j]) {
            minPlatforms++;
            i++;
        }
        else if(arr[i] > dep[j]) {
            minPlatforms--;
            j++;
        }
        if(minPlatforms > result) {
            result =  minPlatforms;
        }
    }
    return result;
}





