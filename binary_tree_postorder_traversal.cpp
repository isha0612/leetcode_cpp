/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> v;
        if(root == NULL) return v;
        solve(v, root);
        return v;
    }
    void solve(vector <int> &v, TreeNode *r) {
        if(r->left) solve(v, r->left);
        if(r->right) solve(v, r->right);
        v.push_back(r->val);
    }
};
