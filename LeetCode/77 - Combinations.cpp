class Solution {
public:
    
    vector<vector<int>> combine1(int n, int k, int lvl) {
        vector<vector<int>> ret;
        if (k == 1) {
            for (int i = 1; i <= n; i++) {
                vector<int> foo(1, i + lvl);
                ret.push_back(foo);
            }
            return ret;
        }
        vector<vector<int>> bar = combine1(n - 1, k - 1, lvl + 1);
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
    }
};