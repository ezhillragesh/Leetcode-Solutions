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
    public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorderTraversalHelper(root, res);
        return res;
    }

private:
    void inorderTraversalHelper(TreeNode* root,vector<int>& res) {
        if (root==nullptr) {
            return;
        }

        inorderTraversalHelper(root->left, res);
        res.push_back(root->val);
        inorderTraversalHelper(root->right, res);
    }
};