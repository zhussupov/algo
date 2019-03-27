class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(), nums.end(), target);
        auto hi = upper_bound(nums.begin(), nums.end(), target);
        int l = (int)(low - nums.begin());
        int h = (int)(hi - nums.begin()) - 1;
        if (low == nums.end() || nums[l] != target) 
            return {-1, -1};
        else
            return {l, h};
    
    }
};