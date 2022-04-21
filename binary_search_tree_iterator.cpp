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
class BSTIterator {
public:
    stack<TreeNode*> st;
    void leftVal(TreeNode* root) {
        if(!root) return;
        st.push(root);
        leftVal(root->left);
    }
    
    BSTIterator(TreeNode* root) {
        leftVal(root);
    }
    
    int next() {
        TreeNode* l = st.top();
        st.pop();
        if(l->right){ 
            leftVal(l->right);
        }
        return l->val;
    }
    
    bool hasNext() {
        return !(st.empty());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

// another solution

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
class BSTIterator {
    queue<int> q;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        q.push(root->val);
        inorder(root->right);
    }
public:
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        int a = q.front();
        q.pop();
        return a;
    }
    
    bool hasNext() {
        return !(q.empty());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
