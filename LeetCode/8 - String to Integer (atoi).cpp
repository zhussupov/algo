class Solution {
public:
    
    bool isDigit(char c) {
        return c >= '0' && c <= '9';
    }
    
    int myAtoi(string str) {
        int q = 0, mul = 1;
        int len = str.length();
        while (str[q] == ' ' && q < len)
            q++;
        if (q >= len)
            return 0;
        char first = str[q];
        if (!isDigit(first) && first != '+' && first != '-')
            return 0;
        if (first == '+' || first == '-') {
            q++;
            if (first == '-')
                mul = -1;
        }
        long long ans = 0;
        while (isDigit(str[q]) && q < len) {
            ans = ans * 10 + (str[q] - '0');
            if (ans < INT_MIN || ans > INT_MAX)
                return mul == 1 ? INT_MAX : INT_MIN;
            q++;
        }
        ans *= mul;
        if (ans < INT_MIN || ans > INT_MAX)
            return mul == 1 ? INT_MAX : INT_MIN;
        return ans;
    }
};