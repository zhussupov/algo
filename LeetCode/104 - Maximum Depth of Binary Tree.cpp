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
    
    void dfs(TreeNode* node, int lvl, int &mx) {
        if (node == NULL)
            return;
        mx = max(mx, lvl);
        dfs(node->left, lvl + 1, mx);
        dfs(node->right, lvl + 1, mx);
    }
    
    int maxDepth(TreeNode* root) {
        int mx = 0;
        dfs(root, 1, mx);
        return mx;
    }
};