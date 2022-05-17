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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int t = target->val;
        return search(cloned, t);
    }
    
    TreeNode* search(TreeNode* root, int target) {
        if(!root) return NULL;
        if(root->val == target) {
            return root;
        }
        TreeNode* left = search(root->left, target);
        if(left) return left;
        TreeNode* right = search(root->right, target);
        return right;
    }
};
