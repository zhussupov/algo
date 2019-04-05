class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int q = 0;
        vector<vector<int>> ans (n, vector<int>(n, 0));
        int i = 0, j = 0;
        for (int l = 1; l <= n * n; l++) {
            ans[i][j] = l;
            int toi = i + dir[q][0];
            int toj = j + dir[q][1];
            bool foo = toi >= n || toi < 0;
            bool bar = toj >= n || toj < 0;
            if (foo || bar || ans[toi][toj] != 0) {
                q = (q + 1) % 4;
                toi = i + dir[q][0];
                toj = j + dir[q][1];
            }
            i = toi;
            j = toj;
        }
        return ans;
    }
};