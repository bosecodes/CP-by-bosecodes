#include <iostream>

using namespace std;

void makeseive(int n) {
    bool isPrime[n+1];
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i <= n; i++){
        isPrime[i] = true;
    }
    for(int i = 2;  i <=n; i++){
        if(isPrime[i] == true){
            for(int j = i*i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 0; i <= n; i++){
        if(isPrime[i])
            cout << i << endl;
    }
}

int main(){
    int n;
    cin >> n;
    makeseive(n);
    return 0;
}
