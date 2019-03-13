class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int > count;
        map<int, int> ind;
        for (int i = 0; i < nums.size(); i++) {
            if (count[target - nums[i]]) {
                ans.push_back(ind[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            count[nums[i]] += 1;
            ind[nums[i]] = i;
        }
    }
};