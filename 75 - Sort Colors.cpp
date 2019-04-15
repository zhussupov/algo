class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        if (len == 0)
            return;
        int i = 0, j = 0;
        for (int r = 0; r < len; r++) {
            int v = nums[r];
            nums[r] = 2;
            if (v < 2) {
                nums[j] = 1;
                j++;
            }
            if (v == 0) {
                nums[i] = 0;
                i++;
            }
        }
    }
};