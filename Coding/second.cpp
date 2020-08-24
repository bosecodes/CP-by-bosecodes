#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

struct Interval{
    int st;
    int et;
};

bool compare(Interval i1, Interval i2) {
    return i1.st < i2.st;
}

int main() {

    int arr[] = {1, 3, 2, 5, 7, 6};
    sort(arr, arr + 6);
    for(int i = 0; i < 6; i++ ){
        cout << arr[i] << endl;
    }
    cout << endl;
    // print the 0-3 subarray in decreasing order
    sort(arr, arr+3, greater<int>());
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }
    // sort an interval, sort coordinates, sort groups
    Interval a[] = {{6,4},{3,4}, {4,6}, {8,13}};
    sort(a, a+4, compare);
    for(int i = 0; i < 4; i++) {
        cout << a[i].st << " " << a[i].et << endl;
    }
    cout << endl;

    // Binary search on sorted arrays
    sort(arr, arr+6);
    cout << binary_search(arr, arr+6, 3) << endl;


    // lower bound
    // it returns pointer, so we subtract
    // index from arr
    // if number is not found, then it returns
    // index of the next higher number
    // in this array 1,2,3,5,6,7
    // when we ask lower bound of 4, it returns index of 5
    // opposite is the case for upper bound
    cout << lower_bound(arr, arr+6, 4) - arr << endl;

    cout << __gcd(10,6) << endl;
    cout << pow(2.2,5) << endl; // returns a double

    int x = 10;
    int y = 12;
    swap(x,y);
    cout << x << endl << y << endl;
    cout << "Minimum number of x and y is " << min(x,y) << endl;
    return 0;
}
