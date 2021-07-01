// Time complexity : O(Nlog(N*M))

#include <bits/stdc++.h>

using namespace std;

double multiply(double n, double m) {
    double ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= m;
    }
    return ans;
}

int main() {
    double n, m;
    cin >> n >> m;
    double low = 1.0;
    double high = m;
    double mid = 0.0;
    while(high - low >= 1e-6) {
        mid = (high + low)/ 2.0;
        if(multiply(mid, n) < m)
            low = mid;
        else
            high = mid;
    }
    cout << mid;
}
