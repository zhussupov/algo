class Solution {
public:
    
    bool isPalindrome(string &s, int l, int r, int dp[][1000], int &ans, string &ansString) {
        int len = r - l + 1;
        if (len < 2) {
            dp[l][r] = 1;
            if (r - l + 1 > ans) {
                ans = r - l + 1;
                ansString = s.substr(l, r - l + 1);
            }
            return true;
        }
        if (len == 2) {
            dp[l][r] = s[l] == s[r];
            if (dp[l][r] && r - l + 1 > ans) {
                ans = r - l + 1;
                ansString = s.substr(l, r - l + 1);
            }
            return dp[l][r];
        }
        if (dp[l][r] != -1)
                return dp[l][r];
        dp[l][r] = isPalindrome(s, l+1, r-1, dp, ans, ansString) && s[l] == s[r];
        if (dp[l][r]) {
            if (r - l + 1 > ans) {
                ans = r - l + 1;
                ansString = s.substr(l, r - l + 1);
            }
        }
        return dp[l][r];
    }
    
    string longestPalindrome(string s) {
        if (s.length() == 0)
            return s;
        int len = s.length();
        int ans = 0;
        string ansString;
        int dp[1000][1000];
        for (int i = 0; i < 1000; i++)
            for (int j = 0; j < 1000; j++)
                    dp[i][j] = -1;
        for (int i = 0; i < len; i++)
                for (int j = i; j < len; j++)
                    dp[i][j] = isPalindrome(s,i,j,dp,ans,ansString);
        return ansString;
    }
};