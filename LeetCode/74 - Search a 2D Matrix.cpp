class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0)
            return false;
        if (matrix[0].size() == 0)
            return false;
        int l = 0, r = matrix.size() - 1;
        while (l < r) {
            int mid = (l + r + 1) / 2;
            if (matrix[mid][0] > target)
                r = mid - 1;
            else
                l = mid;
        }
        
        if (matrix[l][0] > target)
            return false;
        
        int x = l;
        l = 0, r = matrix[x].size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (matrix[x][mid] < target)
                l = mid + 1;
            else
                r = mid;
        }
        return matrix[x][l] == target;
    }
};