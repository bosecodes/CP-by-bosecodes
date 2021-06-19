// Binary exponentiation
// Negative exponentiation is a bit tricky
// As int will overflow 

// Somdev Basu
// Tujhe na bhaaye, na bhaaye, na bhaaye, chaav re...


class Solution {
    public:
        double myPow(int x, int n) {
            double ans = 1.0;
            long long nn = n;
            if(nn < 0) 
                nn = -1*nn;
            while(nn) {
                if(nn % 2) {
                    ans *= x;
                    nn--;
                }
                else {
                    x *= x;
                    nn /= 2;
                }
            }
            if(n < 0) 
                ans = (double)(1.0) / (double)(ans);
            return ans;
        }
};
