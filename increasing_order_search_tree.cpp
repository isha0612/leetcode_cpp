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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        inorder(v, root);
        TreeNode* head = NULL;
        TreeNode* temp = head;
        for(int i = 0; i < v.size(); i++) {
            TreeNode* q = new TreeNode(v[i]);
            if(head == NULL) {
                head = temp = q;
            }
            else {
                temp->right = q;
                temp = q;
            }
        }
        return head;
    }
    void inorder(vector<int> &v, TreeNode* &root) {
        if(root == NULL) return;
        inorder(v, root->left);
        v.push_back(root->val);
        inorder(v, root->right);
    }
};
