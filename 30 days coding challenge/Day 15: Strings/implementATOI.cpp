// implement atoi function 


#include <bits/stdc++.h>

using namespace std;

int main() {
    int flag = 1;
    int res = 0;
    string s;
    cin >> s;
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] - '0' <= 9) {
            res = res * 10 + (s[i] - '0');
        }
        else {
            flag = 0;
            break;
        }
    }
    if(flag == 0) cout << "-1";
    else cout << res;
}




