class Solution {
public:
    
    int fact(int x) {
        int ret = 1;
        for (int i = 2; i <= x; i++)
            ret *= i;
        return ret;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> perm;
        for (int i = 0; i < fact(len); i++) {
            perm.push_back(nums);
            next_permutation(nums.begin(), nums.end());
        }
        return perm;
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        auto perms = permute(nums);
        set<vector<int>> uniq;
        for (auto p: perms)
            uniq.insert(p);
        perms.clear();
        for (auto u: uniq)
            perms.push_back(u);
        return perms;
    }
};