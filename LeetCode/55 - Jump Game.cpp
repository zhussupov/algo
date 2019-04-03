class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int mx = 0;
        for (int i = 0; i < len; i++) {
            int cur = nums[i];
            if (i > mx)
                break;
            mx = max(mx, i + cur);
        }
        return mx >= len - 1;
    }
};