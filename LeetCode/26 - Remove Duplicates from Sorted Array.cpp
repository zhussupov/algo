class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int i = 0, len = nums.size();
        for (int j = 1; j < len; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }   
        }
        return i + 1;
    }
};