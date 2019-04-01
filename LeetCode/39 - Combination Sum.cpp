class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> combs;
        for (auto c: candidates) {
            if (target == c) {
                combs.insert({c});
            }
            if (target - c > 0) {
                auto cur = combinationSum(candidates, target - c);
                
                for (auto x: cur) {
                    x.push_back(c);
                    sort(x.begin(), x.end());
                    combs.insert(x);
                }
                
            }       
        }
        
        vector<vector<int>> ret;
        for (auto y: combs)
            ret.push_back(y);
        return ret;
    }
};