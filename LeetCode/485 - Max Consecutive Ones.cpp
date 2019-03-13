class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0, cur = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cur += 1;
            } else {
                mx = max(mx, cur);
                cur = 0;
            }
        }
        
        mx = max(mx, cur);
        
        return mx;
    }
};
