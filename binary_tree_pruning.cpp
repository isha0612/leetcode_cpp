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
    TreeNode* pruneTree(TreeNode* root) {
        root = check(root);
        return root;
    }
    
    TreeNode* check(TreeNode* &root) {
        if(root->left == NULL && root->right == NULL) {
            if(root->val == 0) return NULL;
            return root;
        }
        if(root->left == NULL) {
            root->right = check(root->right);
            if(!root->right && root->val == 0) root = NULL;
        }
        else if(root->right == NULL) {
            root->left = check(root->left);
            if(!root->left && root->val == 0) root = NULL;
        }
        else {
            root->left = check(root->left);
            root->right = check(root->right);
            if(!root->left && !root->right && root->val == 0) root = NULL;
        }
        return root;
    }
};

//another solution
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
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)
            return root;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if(!root->left && !root->right && !root->val)
            return NULL;
        return root;
    }
};
