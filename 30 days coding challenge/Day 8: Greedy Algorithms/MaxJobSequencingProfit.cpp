// job sequencing problem



#include <bits/stdc++.h>

using namespace std;

// function is used to sort all the jobs according to their profits 
bool comparator(Job a, Job b) {
    return(a.profit > b.profit);
}

pair<int, int> JobScheduling(Job arr[], int n) {
    // sort all jobs according to their profits 
    sort(arr, arr+n, comparator);
    int maxi = arr[0].dead;
    for(int i = 0; i < n; i++) {
        maxi = max(arr[i].dead, maxi);
    }
    int slot[maxi+1];
    for(int i = 0; i <= maxi; i++) {
        slot[i] = -1; // meaning that no job is scheduled in this slot currently
    }
    int countJobs = 0, jobProfit = 0;
    for(int i = 0; i < n; i++) {
        for(int j = arr[i].dead; j > 0; j--) {
            if(slot[j] == -1) {
                slot[j] = i;
                countJobs++;
                jobProfit += arr[i].profit;
                break;
            }
        }
    }
    return make_pair<countJobs, jobProfit>;
}


