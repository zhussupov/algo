class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size(), l = 0, r = len-1;
        if (len == 0)
            return -1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[l] <= nums[mid]) {
                if (target >= nums[l] && target <= nums[mid]) 
                    r = mid;
                else
                    l = mid + 1;
            } else {
                if (target > nums[mid] && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid;
            }
        }
        if (nums[l] != target)
            return -1;
        return l;
    }
};