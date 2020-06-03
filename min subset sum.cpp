#include <bits/stdc++.h>
#define INT_MAX 1e+9
using namespace std;

/*
void print(vector <int> const &a) {
   cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
      cout << a.at(i) << ' ';
}
*/

int minsubsetsum(int arr[], int sum, int n) {
    bool t[n + 1][sum + 1];
    memset(t, false, sizeof(t));
    for(int i = 0; i < n +1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            if(i == 0 && j == 0)
                t[i][j] = 1;
            else if(j == 0)
                t[i][j] = 1;
            else if(i == 0)
                t[i][j] = 0;
        }
    }
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            if(arr[i-1] <= sum)
                t[i][j] = t[i-1][j - arr[i-1]] || t[i-1][j];
            else
                t[i][j] = t[i-1][j];
        }
    }
    /*
    vector<int> nums;
    for(int j = 0; j < (sum/2); j++) {
        if(t[n][j] == true)
            nums.push_back(t[n][j]);
    }
    print(nums);
    int mn = INT_MAX;
    for(int i = nums.begin(); i != nums.end(); ++i) {
        if(*i < mn)
            mn = *i;
    }
    return mn;
    */
    int diff = INT_MAX;
    for (int j=sum/2; j>=0; j--) {
        if (t[n][j] == true) {
            diff = sum-2*j;
            break;
        }
    }
    return diff;
}

int main() {
    int t, n, sum = 0;
    cin >> t;
    while(t--) {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        cout << minsubsetsum(arr, sum, n) << endl;
    }
}
