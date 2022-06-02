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
    vector<string> v;
    void inorder(TreeNode* root, string s) {
        if(!root)
            return;
        s += to_string(root->val);
        if(!root->left && !root->right) {
            v.push_back(s);
            return;
        }
        s += "->";
        inorder(root->left, s);
        inorder(root->right, s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        inorder(root, s);
        return v;
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
    vector<string> v;
    void inorder(TreeNode* root, string s) {
        if(!root)
            return;
        s += "->";
        s += to_string(root->val);
        if(!root->left && !root->right) {
            v.push_back(s);
            return;
        }
        inorder(root->left, s);
        inorder(root->right, s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        s += to_string(root->val);
        inorder(root->left, s);
        inorder(root->right, s);
        if(!v.size())
            v.push_back(s);
        return v;
    }
};
