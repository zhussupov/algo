class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int> >& grid) {
        int sz = grid.size();
    vector<int> maxInRow(sz);
    vector<int> maxInCol(sz);
    for (int i = 0; i < sz; i++) {
        int mxr = grid[i][0];
        int mxc = grid[0][i];
        for (int j = 1; j < sz; j++) {
            mxr = max(mxr, grid[i][j]);
            mxc = max(mxc, grid[j][i]);
        }
        maxInRow[i] = mxr;
        maxInCol[i] = mxc;
    }        
    int ans = 0;
    for (int i = 0; i < sz; i++) {
        for (int j = 0; j < sz; j++) {
            int cur = min(maxInRow[i], maxInCol[j]);
            if (grid[i][j] < cur)
                ans += cur - grid[i][j];
        }
    }
    return ans;
    }
};