class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        if (len == 0)
            return 0;
        vector<int> dp (len);
        dp[0] = nums[0];
        int mx = nums[0];
        for (int i = 1; i < len; i++) {
            dp[i] = nums[i] + (dp[i-1] > 0 ? dp[i-1] : 0);
            mx = max(mx, dp[i]);
        }
        return mx;
    }
};