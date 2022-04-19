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
    vector<int> v;
    int i = 0;
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(v.begin(), v.end());
        check(root);
    }
    void check(TreeNode* root) {
        if(root == NULL) return;
        check(root->left);
        if(v[i] != root->val) swap(v[i], root->val);
        i++;
        check(root->right);
    }
    void inorder(TreeNode* root) {
        if(root == NULL) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
};
