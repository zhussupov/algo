class Solution {
public:
    
    bool isPalindrome(string s) {
        int len = s.length();
        for (int i = 0; i < len / 2; i++)
            if (s[i] != s[len - i - 1])
                return false;
        return true;
    }
    
    string toString(int x) {
        string ret = "";
        while (x) {
            int cur = x % 10;
            ret += char(cur);
            x /= 10;
        }
        return ret;
    }
    
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        string str = toString(x);
        return isPalindrome(str);
    }
};