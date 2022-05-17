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
    int mxdepth = 0;
    int maxDepth(TreeNode* root) {
        search(root, 0);
        return mxdepth;
    }
    
    void search(TreeNode* root, int depth) {
        if(!root) {
            mxdepth = max(mxdepth, depth);
            return;
        }
        search(root->left, depth + 1);
        search(root->right, depth + 1);
    }
};
