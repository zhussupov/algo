class Solution {
public:
    double myPow(double x, int n) {        
        int mul = n >= 0 ? 1 : -1;
        if (n == 0)
            return 1;
        if (n == 1 || n == -1) 
            return mul > 0 ? x : 1.0 / x;
        double res = myPow(x, abs(n/2)), ans = res * res;
        if (n%2) 
            ans *= x;
        return mul > 0 ? ans : 1.0 / ans;
    }
};