// Best time to buy stock 
// Brute force takes O(n2)
// Optimal solution is Single pass, 
// Time complexity : O(n), Space : O(1)

// Somdev Basu
// Kismat se kaha, tu khudko lagta h


#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &stocks) {
    int maxPro = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < stocks.size(); i++) {
        minPrice = min(minPrice, stocks[i]);
        maxPro = max(maxPro, stocks[i] - minPrice);
    }
    return maxPro;
}

int main() {
    vector<int> stocks{7, 1, 5, 3, 6, 4};
    cout << maxProfit(stocks);
    return 0;
}
