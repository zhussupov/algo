class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        if (len == 0)
            return {};
        vector<int> ans(len, 0);
        int rem = 0;
        digits[len - 1]++;
        for (int i = 0; i < len; i++) {
            int l = len - i - 1;
            int cur = digits[l] + rem;
            rem = cur / 10;
            cur %= 10;
            ans[i] = cur;
        }
        if (rem != 0)
            ans.push_back(rem);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};