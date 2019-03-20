class Solution {
public:
    
    string getFromInt(int x, int n) {
        string ret = "";
        for (int i = 0; i < 2*n; i++) {
            int cur = x % 2;
            if (cur == 1)
                ret += "(";
            else
                ret += ")";
            x /= 2;
        }
        return ret;
    }
    
    bool check(string s) {
        int balance = 0;
        for (auto c: s) {
            if (c == ')')
                balance--;
            else
                balance++;
            if (balance < 0)
                return false;
        }
        return balance == 0;
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int mx = 1<<(2*n);
        for (int i = 0; i < mx; i++) {
            string cur = getFromInt(i,n);
            if (check(cur))
                ans.push_back(cur);
        }
        return ans;
    }
};