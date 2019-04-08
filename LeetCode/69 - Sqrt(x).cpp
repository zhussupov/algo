class Solution {
public:
    int mySqrt(int x) {
        long double l = 0.0, r = 1e5, eps = 1e-3;
        while (llabs(l-r) >= eps) {
            long double mid = (l + r)/((long double)2.0);
            if (mid * mid < x)
                l = mid;
            else
                r = mid;
        }
        long long ans = (long long)r;
        if (ans * ans > x)
            return (int)--ans;
        else
            return (int)ans;
    }
};