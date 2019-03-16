class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = 0;
        int l = 0, r = height.size() - 1;
        while (l < r) {
            int curMn = min(height[l], height[r]);
            int d = r - l;
            int cur = d * curMn;
            mx = max(cur, mx);
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return mx;
    }
};