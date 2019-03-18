class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sz = nums.size();
        sort(nums.begin(), nums.end());
        
        int ans = nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < sz; i++) {
            int target2 = target - nums[i];
            int front = i + 1;
            int back = sz - 1;
            while (front < back) {
                int sum = nums[front] + nums[back];
                int cur = nums[i] + nums[front] + nums[back];
                if (abs(cur - target) < abs(ans - target))
                    ans = cur;
                if (sum < target2)
                    front++;
                else
                    back--;
            }
        }
        return ans;
    }
};