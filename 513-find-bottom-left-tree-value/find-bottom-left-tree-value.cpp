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
    using info=pair<TreeNode*, int>;
    int findBottomLeftValue(TreeNode* root) {
        int ans=0, level=-1;
        queue<info> q;
        q.emplace(root, 0);
        while(!q.empty()){
            auto [node, h]=q.front();
            q.pop();
            if (!node) continue;
            if (h>=level){
                ans=node->val;
                level=h;
            }
            q.emplace(node->right, h+1);//FIFO
            q.emplace(node->left, h+1);
        }

        return ans;
    }
};


auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();