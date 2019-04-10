class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> cnt;
        int mx = 0, ans;
        for (auto x: nums) {
            cnt[x]++;
            if (cnt[x] > mx) {
                mx = cnt[x];
                ans = x;
            }
        }
        return ans;
    }
};