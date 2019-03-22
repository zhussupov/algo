class Solution {
public:
    int lengthOfLastWord(string s) {
        int cur = 0, space = 0;
        for (auto c: s) {
            if (c != ' ') {
                if (space == 1) {
                    space = 0;
                    cur = 0;
                }
                cur++;                
            } else {
                space = 1;
            }
        }
        return cur;
    }
};