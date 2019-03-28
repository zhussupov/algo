class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 1; i < n; i++) {
            string nw = "";
            char cur = ans[0];
            int q = 0;
            while (q < ans.size()) {
                int cnt = 0;
                while (q < ans.size() && cur == ans[q]) {
                    q++;
                    cnt++;
                }
                nw += (char)(cnt + '0');
                nw += cur;
                if (q < ans.size())
                    cur = ans[q];
            }
            ans = nw;
        }
        return ans;
    }
};