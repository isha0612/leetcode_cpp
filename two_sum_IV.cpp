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
    void inorder(TreeNode* root, vector<int>& numbers) {
        if(!root)
            return;
        inorder(root->left, numbers);
        numbers.push_back(root->val);
        inorder(root->right, numbers);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> numbers;
        inorder(root, numbers);
        int i = 0, j = numbers.size() - 1;
        while(i < j) {
            if(numbers[i] + numbers[j] == k) 
                return true;
            else if(numbers[i] + numbers[j] > k)
                j--;
            else
                i++;
        }
        return false;
    }
};
