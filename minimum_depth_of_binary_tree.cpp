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
    int mndepth = 0;
    int minDepth(TreeNode* root) {
        search(root, 1);
        return mndepth;
    }
    
    void search(TreeNode* root, int depth) {
        if(!root) return;
        if(!root->left && !root->right) {
            if(!mndepth) mndepth = depth;
            else mndepth = min(mndepth, depth);
            return;
        }
        if(!root->right)
            search(root->left, depth + 1);
        if(!root->left)
            search(root->right, depth + 1);
        if(root->left && root->right) {
            search(root->left, depth + 1);
            search(root->right, depth + 1);
        }
    }
};
