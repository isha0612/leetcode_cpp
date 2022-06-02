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
    void inorder(TreeNode* root, int sum, int &total) {
        if(!root) {
            return;
        }
        sum = sum * 10 + (root->val);
        if(!root->left && !root->right) {
            total += sum;
            return;
        }
        inorder(root->left, sum, total);
        inorder(root->right, sum, total);
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0, total = 0;
        inorder(root, sum, total);
        return total;
    }
};
