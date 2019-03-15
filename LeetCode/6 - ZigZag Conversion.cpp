class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> foo(numRows);
        int q = 0, d = 1;
        for (int i = 0; i < s.length(); i++) {
            foo[q] += s.substr(i,1);
            if (q + d >= numRows || q + d < 0)
                d *= -1;
            if (numRows == 1)
                d = 0;
            q += d;
        }
        string ans = "";
        for (int i = 0; i < foo.size(); i++) {
            string cur = foo[i];
            for (int j = 0; j < cur.length(); j++) {
                ans += cur.substr(j,1);
            }
        }
        return ans;
    }
};