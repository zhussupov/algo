/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<int, int> cnt;
    int mx = 0;
    
    int dfs(TreeNode* node) {
        if (node == NULL)
            return 0;
        int leftSum = dfs(node->left);
        int rightSum = dfs(node->right);
        int sum = node->val + leftSum + rightSum;
        
        if (cnt.find(sum) != cnt.end())
            cnt[sum]++;
        else
            cnt[sum] = 1;
        mx = max(mx, cnt[sum]);
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        dfs(root);
        for (auto x: cnt) {
            if (x.second == mx)
                ans.push_back(x.first);
        }
        return ans;
    }
};