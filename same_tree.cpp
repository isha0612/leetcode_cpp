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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && q || !q && p) return false;
        return search(p, q);
    }
    
    bool search(TreeNode* p, TreeNode* q ) {
        if(!p && !q) return true;
        if(!p && q || !q && p) return false;
        if(p->val != q->val) return false;
        int ans = search(p->left, q->left);
        if(!ans) return ans;
        ans = search(p->right, q->right);
        return ans;
    }
};
