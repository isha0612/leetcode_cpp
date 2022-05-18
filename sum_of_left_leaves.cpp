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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        helper(root, false);
        return sum;
    }
    
    void helper(TreeNode* r, bool isLeft) {
        if(!r) return;
        if(!r->left && !r->right && isLeft) {
            sum += r->val;
            return;
        }
        helper(r->left, true);
        helper(r->right, false);
    }
};
