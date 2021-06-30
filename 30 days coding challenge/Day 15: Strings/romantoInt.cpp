// roman to integer 

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string roman;
    cin >> roman;
    map<char, int> rmap;
    rmap.insert({'I', 1});
    rmap.insert({'V', 5});
    rmap.insert({'X', 10});
    rmap.insert({'L', 50});
    rmap.insert({'C', 100});
    rmap.insert({'D', 500});
    rmap.insert({'M', 1000});
    int result = rmap[roman[roman.length() - 1]];
    for(int i = roman.length() - 2; i >= 0; i--) {
        if(rmap[roman[i+1]] < rmap[roman[i]]) {
            result += rmap[roman[i]];
        }
        if(rmap[roman[i+1]] > rmap[roman[i]]) {
            result -= rmap[roman[i]];
        }
    }
    cout << result;
}

// https://www.youtube.com/watch?v=dlATMslQ6Uc <--- you can check for further
