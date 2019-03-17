class Solution {
public:
    int romanToInt(string s) {
        if (s.length() == 0)
            return 0;
        unordered_map<char, int> num;
        num['I'] = 1;
        num['V'] = 5;
        num['X'] = 10;
        num['L'] = 50;
        num['C'] = 100;
        num['D'] = 500;
        num['M'] = 1000;
        int ans = num[s[0]];
        for (int i = 1; i < s.length(); i++) {
            int cur = num[s[i]];
            int prev = num[s[i-1]];
            ans += cur;
            if (cur > prev) {
                ans -= 2 * prev;
            }
        }
        return ans;
    }
};