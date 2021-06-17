// sort an array of 0s, 1s, 2s without using extra space 
// and any sorting algo
// Somdev Basu
// The ultimate Devtaaaa

#include <bits/stdc++.h>

using namespace std;

void sortvec(vector<int> &a) {
    int low = 0, mid = 0, high = a.size() - 1;
    while(mid <= high) {
        switch(a[mid]) {
            case 0:
                swap(a[mid++], a[low++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid++], a[high--]);
                break;
        }
    }
    vector<int>:: iterator ptr;
    for(ptr = a.begin(); ptr != a.end(); ptr++) {
        cout << *ptr << "\t";
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sortvec(a);
    return 0;
} 
