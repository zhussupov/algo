class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        bool foo = true;
        int ans = 0;
        string ansString = "";
        while (foo) {
            char cur = strs[0][ans];
            for (int i = 0; i < strs.size(); i++) {
                if (ans >= strs[i].size())
                    return ansString;
                if (strs[i][ans] != cur) {
                        foo = false;
                        break;
                    }
            }
            if (foo) {
                ansString += cur;
                ans++;
            }
        }
        return ansString;
    }
};