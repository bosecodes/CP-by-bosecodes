#include <bits/stdc++.h>

using namespace std;

int msis(int arr[], int n) {
    int i, j, max = 0;
    int msis[n];
    // initialise the msis values for all indices 
    for(i = 0; i < n; i++) {
        msis[i] = arr[i];
    }
    // compute maximum sum values in bottom up manner 
    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(arr[i] > arr[j] && msis[i] < msis[j] + arr[i])
                msis[i] = msis[j] + arr[i];
        }
    }
    // Pick max of all msis values 
    for(i = 0; i < n; i++) {
        if(max < msis[i])
            max = msis[i];
    }
    return max;
}






