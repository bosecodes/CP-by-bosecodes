#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, res = "";
    int n, resLen = 0, l, r;
    cin >> s;
    n = s.length();
    for(int i = 0; i < n; i++) {
        l = r = i;
        while(l >= 0 && r < n && s[l] == s[r]) {
            // checking for odd length palindromes
            if(r - l + 1 > resLen) {
                res = s.substr(l, r+1);
                resLen = r - l + 1;
            }
            l--;
            r++;
        } // while ends 
        l = i;
        r = i+1;
        while(l >= 0 && r < n && s[l] == s[r]) {
            if(r - l + 1 > resLen) {
                res = s.substr(l , r);
                resLen = r - l + 1;
            }
            l--;
            r++;
        } // while ends 
    } // for ends 
    cout << "The longest string is " << res << " of length " << resLen;
}

// https://www.youtube.com/watch?v=XYQecbcd6_c <-- for further explanation
