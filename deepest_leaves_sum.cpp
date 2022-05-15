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
    int sol = 0, mx = 0;
    void inorder(TreeNode *root, int depth) {
        if(!root) return;
        if(!root->left && !root->left) {
            if(depth >= mx) {
                if(depth == mx) 
                    sol += root->val;
                else {
                    mx = depth;
                    sol = root->val;
                }
            }
        }
        inorder(root->left, depth + 1);
        inorder(root->right, depth + 1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        inorder(root, 0);
        return sol;
    }
};
