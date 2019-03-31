class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged;
        int l = 0, j = 0;
        for(int i = 0; i < n + m; i++) {
            if (l >= m) {
                merged.push_back(nums2[j++]);
                continue;
            }
            if (j >= n) {
                merged.push_back(nums1[l++]);
                continue;
            }
            if (nums1[l] < nums2[j])
                merged.push_back(nums1[l++]);
            else
                merged.push_back(nums2[j++]);
        }
        nums1 = merged;
    }
};