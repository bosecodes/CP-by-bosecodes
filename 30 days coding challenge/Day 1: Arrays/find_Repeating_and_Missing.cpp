// Given an unsorted array of size n
// Array elements are in the range 1 to n
// One number from the set is missing
// While one number occurs twice in the array 
// Find both these numbers 
// Optimal approach

// int arr[] = {4, 3, 6, 2, 1, 1}

// Somdev Basu
// Devtaa for a reason ;)

#include <bits/stdc++.h>

using namespace std;
#define ll long long 

void solve() {
    int n;
    cin >> n;
    int arr[n];
    // s1 stores the sum of the numbers present
    int s1 = 0;
    int s2 = 0;
    // s2 stores the sum of the products of numbers present
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        s1 += arr[i];
        s2 += arr[i]*arr[i];
    }
    // sum of all numbers
    int s3 = ((n*(n+1)) / 2) - s1;
    int s4 = ((n*(n+1)*(2*n+1))/6) - s2;
    // now, take x-y = s3; x2 - y2 = s4
    // in s5, store x+y
    int s5 = s4/s3;
    int x = 0.5 * (s5 + s3);
    int y = 0.5 * (s5 - s3);
    cout << "The missing number " << x << "\n";
    cout << "The repeating number " << y << "\n";
}

int main(){
    int t=1, z=1;
    // scanf("%d",&t);
    while(z<=t){
        solve(); z++;
    }
    return 0;
}


