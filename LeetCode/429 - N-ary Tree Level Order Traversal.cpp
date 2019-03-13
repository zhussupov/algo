/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    
    void dfs(Node* node, int lvl, vector<vector<int> >& vec) {
        if (node == NULL)
            return;
        if (lvl >= vec.size()) {
            vec.push_back({node->val});    
        } else {
            vec[lvl].push_back(node->val);
        }
        
        
        for (int i = 0; i < node->children.size(); i++) {
            dfs(node->children[i], lvl + 1, vec);
        }
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> > ans;
        dfs(root, 0, ans);
        return ans;
    }
};