class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int cnt1[10], cnt2[10];
        for (int i = 0; i < 9; i++) {
            for (int q = 0; q < 10; q++) {
                cnt1[q] = 0;
                cnt2[q] = 0;
            }
            for (int j = 0; j < 9; j++) {
                char c1 = board[i][j], c2 = board[j][i];
                int n1 = c1 == '.' ? 0 : (int)(c1 - '0');
                int n2 = c2 == '.' ? 0 : (int)(c2 - '0');
                if (n1 != 0)
                    cnt1[n1]++;
                if (n2 != 0)
                    cnt2[n2]++;
                if (cnt1[n1] > 1 || cnt2[n2] > 1)
                    return false;
            }
        }
        
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                
                for (int q = 0; q < 10; q++)
                    cnt1[q] = 0;
                
                for (int k = i; k < i + 3; k++) {
                    for (int l = j; l < j + 3; l++) {
                        char c = board[k][l];
                        int n = c == '.' ? 0 : (int)(c - '0');
                        if (n != 0)
                            cnt1[n]++;
                        if (cnt1[n] > 1)
                            return false;
                    }
                }
                
            }
        }
        return true;
    }
};