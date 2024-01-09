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
    vector<int> leaf(TreeNode* root) {
    vector<int> res;

    if (!root->left && !root->right) {
        res.push_back(root->val);
    }

    if (root->left) {
        // Concatenate the result of the recursive call for the left child
        vector<int> left_leaf = leaf(root->left);
        res.insert(res.end(), left_leaf.begin(), left_leaf.end());
    }

    if (root->right) {
        // Concatenate the result of the recursive call for the right child
        vector<int> right_leaf = leaf(root->right);
        res.insert(res.end(), right_leaf.begin(), right_leaf.end());
    }

    return res;
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> tree1=leaf(root1);
        vector <int> tree2 =leaf(root2);
        
        // for(auto it:tree1){
        //     cout<<it<<" ";
        // }

       
        // for(auto it:tree2){
        //     cout<<it<<" ";
        // }
        if(tree1.size()!=tree2.size()) return false;
        for(int i=0;i<tree1.size();i++){
            if(tree1[i]!=tree2[i]) return false;
        }

        return true;
    }
};