class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m == 0)
            return {};
        int n = matrix[0].size();
        if (n == 0)
            return {};
        int dir[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
        int q = 2;
        vector<vector<bool>> used (m, vector<bool> (n, false));
        vector<int> ans;
        int i = 0, j = 0;
        for (int l = 0; l < m * n; l++) {
            int cur = matrix[i][j];
            used[i][j] = true;
            ans.push_back(cur);
            int toi = i + dir[q][0];
            int toj = j + dir[q][1];
            bool foo = (toi >= m || toi < 0);
            bool bar = (toj >= n || toj < 0);
            if (foo || bar || used[toi][toj]) {
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