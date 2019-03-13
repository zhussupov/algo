class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int N = s.length();
        for (int len = 1; len <= N / 2; len++) {
            string cur = s.substr(0, len);
            
            bool isOk = true;
            
            for (int i = len; i < N; i += len) {
                string sub = s.substr(i, len);
                if (sub != cur) {
                    isOk = false;
                    break;
                }
            }
            if (isOk)
                return true;
        }
        return false;
    }
};
