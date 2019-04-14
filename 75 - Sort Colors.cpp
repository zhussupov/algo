class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        if (len == 0)
            return;
        int i = 0, l = 0, r = len - 1;
        while (nums[l] == 0 && l < len - 1)
            l++;
        while (nums[r] == 2 && r > 0)
            r--;
        if (r == 0)
            return;
        i = l;
        while (i <= r) {
            if (nums[i] == 0) {
                int temp = nums[l];
                nums[l] = nums[i];
                nums[i] = temp;
                while (nums[l] == 0 && l < len - 1)
                    l++;
            }
            if (nums[i] == 2) {
                int temp = nums[r];
                nums[r--] = nums[i];
                nums[i] = temp;
                while (nums[r] == 2 && r > 0)
                    r--;
            }
            if (nums[i] == 1)
                i++;
        }
    }
};