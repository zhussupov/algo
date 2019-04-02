class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > anags;
        for (auto s: strs) {
            auto sorted = s;
            sort(sorted.begin(), sorted.end());
            anags[sorted].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto v: anags) {
            ans.push_back(v.second);
        }
        return ans;
    }
};