class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        if (len == 0)
            return 0;
        int ans = 0;
        for (auto a: nums)
            ans += a == val;
        ans = len - ans;
        int l = 0, r = len - 1;
        while (l < r) {
            if (nums[l] != val)
                l++;
            else {
                while(l < r && nums[r] == val)
                    r--;
                if (l == r)
                    break;
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
            }
        }
        return ans;
    }
};